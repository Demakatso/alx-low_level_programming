#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file to read
 * @letters: the number of characters to read and print
 * 
 * Return: the number of characters printed, or 0 on error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t bytes_read, bytes_written;
FILE *file;
char *buffer;

if (filename == NULL)
return (0);

file = fopen(filename, "r");
if (file == NULL)
return (0);

buffer = malloc(sizeof(char) * (letters + 1));
if (buffer == NULL)
{
fclose(file);
return (0);
}

bytes_read = fread(buffer, sizeof(char), letters, file);
if (bytes_read == -1)
{
free(buffer);
fclose(file);
return (0);
}

buffer[bytes_read] = '\0';

bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
if (bytes_written == -1 || (size_t)bytes_written != (size_t)bytes_read)
{
free(buffer);
fclose(file);
return (0);
}

free(buffer);
fclose(file);

return (bytes_read);
}

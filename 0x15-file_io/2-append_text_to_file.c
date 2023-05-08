#include <stdio.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: text to add at the end of the file
 * 
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
FILE *file;
int count = 0;

if (filename == NULL)
return (-1);

file = fopen(filename, "a");
if (file == NULL)
return (-1);

if (text_content != NULL)
{
while (text_content[count] != '\0')
count++;
if ((int)fwrite(text_content, 1, count, file) != (int)count)

{
fclose(file);
return (-1);
}
}

fclose(file);
return (1);
}

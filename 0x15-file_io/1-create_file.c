#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int create_file(const char *filename, char *text_content)
{
int fd, len = 0, bytes_written;
mode_t mode = S_IRUSR | S_IWUSR;

if (filename == NULL)
return (-1);

fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, mode);
if (fd == -1)
return (-1);

if (text_content != NULL)
{
while (text_content[len])
len++;
bytes_written = write(fd, text_content, len);
if (bytes_written != len)
{
close(fd);
return (-1);
}
}

close(fd);
return (1);
}

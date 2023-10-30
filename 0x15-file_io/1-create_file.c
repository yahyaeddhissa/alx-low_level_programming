#include "main.h"

/**
 * create_file - Creates a file
 * @filename: Name of the file to create
 * @text_content: A NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 *         If filename is NULL, return -1
 *         If text_content is NULL, create an empty file
 */
int create_file(const char *filename, char *text_content)
{
    int fd, len, bytes_written;

    if (filename == NULL)
        return (-1);

    fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
    if (fd == -1)
        return (-1);

    if (text_content != NULL)
    {
        len = 0;
        while (text_content[len] != '\0')
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

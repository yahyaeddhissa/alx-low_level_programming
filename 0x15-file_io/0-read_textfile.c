#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: Name of the file
 * @letters: Number of letters it should read and print
 *
 * Return: The actual number of letters it could read and print
 *         If the file cannot be opened or read, return 0
 *         If filename is NULL, return 0
 *         If write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd;
    ssize_t bytes_read, bytes_written;
    char *buffer;

    if (filename == NULL)
        return (0);

    fd = open(filename, O_RDONLY);
    if (fd == -1)
        return (0);

    buffer = malloc(sizeof(char) * letters);
    if (buffer == NULL)
    {
        close(fd);
        return (0);
    }

    bytes_read = read(fd, buffer, letters);
    if (bytes_read == -1)
    {
        free(buffer);
        close(fd);
        return (0);
    }

    bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
    if (bytes_written != bytes_read)
    {
        free(buffer);
        close(fd);
        return (0);
    }

    free(buffer);
    close(fd);
    return (bytes_written);
}

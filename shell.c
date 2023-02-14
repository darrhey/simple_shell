#include "main.h"
/**
 * main - runs shell program
 *
 * Return: 0 on success
 */
int main(void)
{
char *path = NULL, *copy = NULL, *p = NULL;
char *fullpath = NULL, **i = NULL;
int status = 0;
signal(SIGINT, SIG_IGN);
path = _getenv("PATH");
if (path == NULL)
return (-1);
while (1)
{
i = NULL;
prompt();
p = _read();
if (*p != '\0')
{
i = tokenize(p);
if (i == NULL)
{
free(p);
continue;
}
fullpath = _fullpathbuffer(i, path, copy);
if (checkbuiltins(i, p,status) != 0)
continue;
status = _forkprocess(i, p, fullpath);
}
else
free(p);
}
return (0);
}

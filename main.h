#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <signal.h>
#include <fcntl.h>

extern char **env;

int prompt(void);
char *_read(void);
char *_fullpathbuffer(char **i, char *path, char *copy);
int checkbuiltins(char **i, char *p, int status);
int _forkprocess(char **i, char *p, char *fullpath);

char *_strdup(char *str);
int _splitstring(char *str);
int _strcmp(const char *s1, const char *s2);
int _strcat(char *dest, char *src);
int _strlen(char *s);

char **tokenize(char *p);
int _splitPATH(char *str);
int _PATHstrcmp(const charc *s1, const char *s2);
char *_concat(char *tmp, cahr **i, char *tok);

char *_getenv(const char *name);
int _env(void);
void _puts(char *str);
int _putchar(char c);
char *_memset(char *s, char b, unsigned int n);

#endif /*MAIN_H*/

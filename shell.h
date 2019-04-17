#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include <assert.h>
#define SIZEBUFFER 1024
char **generate(char **env);
char *str_concat(char *s1, char *s2);
char *get_value_env(char **envp, char *variable);
int _strcmp(char *s1, char *s2);
char *_strcat(char *dest, char *src);
void intHandler(int i);
void prompt(void);
int listenread(char *);
void get_simple_args(int, char **, char *, char **);
int pid_launch(char **, char *, char **);
void _error(void);
long int _strlen(char *);
int args_pop(char **);
char *getpath(char **);
char **setpathparams(char *);
int update_cmd(char **, char**);
int appenddir(char *);
#endif

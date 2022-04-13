#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

extern char **environ;

char* find_path(void)
{
    char* path = "PATH = ";
    int i = 0;
    
    while(environ[i])
   {
       if(strcmp(environ[i], path) == 0){
           return(environ[i] + 5);
       }
   }

   return 0;
}



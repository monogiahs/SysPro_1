#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
     FILE *f;
     char c;

     f=fopen("test.txt","rt");

     while((c=fgetc(f))!=EOF)
     {
         printf("%c",c);
     }

     fclose(f);
     return 0;
}

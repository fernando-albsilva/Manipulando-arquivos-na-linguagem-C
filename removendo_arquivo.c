#include <stdio.h>

int main(void)
{
    FILE * fptr;
    int info;
    char * file_name;
  
    file_name="arquivo03";
  
    fptr=fopen(file_name,"a+");

          fprintf(fptr,"%d\n",1990);
    
    fclose(fptr);

    info=remove(file_name);
    
    printf("%d\n",info);
    
    return 0;
}
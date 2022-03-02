#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *str,i;

    str = (char*)malloc(1024*sizeof(char));

    gets(str);

    for(str=0;str<='\0';i++)
    {
        if(str[i]==" ")
        {
            printf("\n");
        }
        else
        {
            printf("%s",*(str+i));
        }
    }

    printf("\n%s",str);

    free(str);

    return 0;
}
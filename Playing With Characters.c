#include <stdio.h>

int main() 
{
    char ch,s[100];
    
    scanf("%c",&ch);
    printf("%c",ch);
    scanf("%s",s);
    printf("\n%s",s);
    scanf("\n");
    scanf("%[^\n]%*c", s);
    printf("\n%s",s);
     
    return 0;
}

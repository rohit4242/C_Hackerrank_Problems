#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,*ptr;

    scanf("%d",&n);

    ptr = (int*)calloc(n,sizeof(int));

    for (int i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }

    for(int i=n-1;i>=0;i--)
    {
        printf("%d ",*(ptr+i));
    }

    free(ptr);

    return 0;
}
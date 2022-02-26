#include <stdio.h>

int main()
{
	int a,b;
    float x,y;
    scanf("%d %d",&a,&b);
    scanf("%f %f",&x, &y);
    
    int sum_int = a+b;
    float sum_float= x+y;
    int sub_int = a-b;
    float sub_float = x-y;
    
    printf("%d %d",sum_int,sub_int);
    printf("\n%.1f %.1f",sum_float,sub_float);
    
        
    return 0;
}

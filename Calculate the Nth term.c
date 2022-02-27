#include <stdio.h>

int find_nth_term(int n, int a, int b, int c) 
{
  //find the nth term
    int term = a;
    for(int i = 1; i < n; i++)
        term = term * b + c;
    return term;
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
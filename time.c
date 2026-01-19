#include <stdio.h>

int main() 
{
    int S,d,h,m,s,rs;
    printf("Enter Second: ");
    scanf("%d", &S);
    d=S/86400;
    h=S/3600;
    rs=S%3600;
    m=rs/60;
    s=rs%60;
    printf("%d days %d hours %d minutes %d      Second",d,h,m,s);
    return 0;
}

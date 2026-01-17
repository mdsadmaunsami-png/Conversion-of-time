#include <stdio.h>

int main() 
{
    int tsec,h,m,s;
    printf("Enter total second=");
    scanf("%d",&tsec);
    h=tsec/3600;
    int remaining_sec=tsec%3600;
    m=remaining_sec/60;
    s=remaining_sec%60;
    printf("Hour=%d\nMinute=%d\nSecond=%d",h,m,s);
    return 0;
}

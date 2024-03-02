#include<stdio.h>
#include<unistd.h>
void dealy(unsigned int xms)  // xms代表需要延时的毫秒数
{
    unsigned int x,y;
    for(x=xms;x>0;x--)
        for(y=110;y>0;y--);
}
int main()
{
int i=0;
    while(i<100000){
    printf("🌕🌕🌕🌕");
    dealy(10000);
    printf("\b\b\b\b");
    printf("🌖🌖🌖🌖");
    dealy(10000);
    printf("\b\b\b\b");
    printf("🌗🌗🌗🌗");
    dealy(10000);
    printf("\b\b\b\b");
    printf("🌘🌘🌘🌘");
    dealy(10000);
    printf("\b\b\b\b");
    printf("🌑🌑🌑🌑");
    dealy(10000);
    printf("\b\b\b\b");
    i++;
    }
    return 0;
}
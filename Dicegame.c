#include<stdio.h>
#include<time.h>
#include <stdlib.h>
int main(){
    int s,t;
    srand(time(NULL));
    s = rand() % 6 + 1;
    t = rand() % 6 + 1;
    printf("What is your name?\n>");
    char a[10];
    scanf("%s",a);
    printf("Hello,%s !\n",a);
    printf("Rolling the dice...\n");
    printf("Die 1: %d\n",s);
    printf("Die 2: %d\n",t);
    printf("Total value: %d\n",s+t);
    if(s+t>7) printf("%s won\n",a);
    else printf("%s lose\n",a);
    return;
}

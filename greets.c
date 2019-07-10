#include<stdio.h>
#include<time.h>
#include <stdlib.h>
int main(){
    
  printf("What is your name?\n>");
  char a[10];
  scanf("%s",a);
  printf("Hello,%s !\n",a);
    int s,t;
    srand(time(NULL));
    s = rand() % 6 + 1;
    t = rand() % 6 + 1;
    printf("Rolling the dice...\n");
    printf("Die 1: %d\n",s);
    printf("Die 2: %d\n",t);
    printf("Total value: %d\n",s+t);
  return;
}

#include<stdio.h>
#include<conio.h>
void main(){
    int a,b,c,i,j;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("x");
        }
        printf("\n");
    }
    getch();
}

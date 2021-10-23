#include<stdio.h>
#include<conio.h>
void main(){
int a,c,d,j,i;
scanf("%d",&a);
for(i=1;i<=a;i++)
    {
        if(i==1 || i==a)
            {
            for(j=1;j<=a;j++)
            {
                printf("x");
            }

        }
        else{
        for(j=1;j<=a;j++)
        {
            if(j==1 || j==a)
                printf("x");
            else
                printf(" ");
        }

        }
    printf("\n");
    }

getch();


}

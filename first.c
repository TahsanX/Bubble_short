#include<stdio.h>
int main(){
    int a,i,j;
    printf("How many numbers do you want to enter?\n");
    scanf("%d",&a);
    printf("-------\n");
    int numb[a],temp;
    for ( i = 0; i < a; i++)
    {
        scanf("%d",&numb[i]);
    }
    printf("-------\n");
    for ( i = 0; i < a; i++)
    {
        for ( j = 0; j < a-1; j++)
        {
            if (numb[j]>numb[j+1])
            {
                temp=numb[j];
                numb[j]=numb[j+1];
                numb[j+1]=temp;
            }
            
        }
        
    }
    for ( i = 0; i < a; i++)
    {
        printf("%d\n",numb[i]);
    }
    
    
    return 0;
}
#include<stdio.h>
#include<time.h>
void main()
{
    int n;int r=0;int a;
   
   do
   {
      printf("press a number 1-10 \n ");
         scanf("%d",&n);
         srand(time(0));
         r =rand()%10+1;
        if(n==r)
         {
            printf("you won! \n ");
             
         }
        else if(n>r)
        {
            printf("too big \n ");
            continue;
        }
        else
        {
            printf("too small \n ");
            continue;
        }
        printf("enter 1 to exit");
        scanf("%d",&a);
    /* code */
   } while (a!=1);
   
       
        /* code */
       
    
    
    
    
    
}
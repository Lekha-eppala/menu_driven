#include<stdio.h>

int main()
{
    
    int choice=0;
    int num,rev,rem,dup,fact,i,a,b,c,sum;
    a=0;
    b=0;
    c=1;

    while(1)
    {
        printf("\n \n");
        printf("Menu:\n");
        printf("1. Palindrome \n");
        printf("2. armstrong\n");
        printf("3. Factorial\n");
        printf("4. Exit\n\n\n");
        printf("Enter your choice :  ");
        scanf("%d",&choice);
        
        switch(choice)
        {
            case 1:
                {
                printf("\n enter a number: ");
                scanf("%d",&num);
                rev=0;rem=0;
                dup=num;
                while(num>0)
                {
                rem=num%10;
                rev=(rev*10)+rem;
                num=num/10;
                }
                if(rev==dup)
                printf("\n number is palindrome");
                else
                printf("\n number is not palindrome");
                break;
                }
        
            case 2:
                {
                    printf("\n enter the number: ");
                    scanf("%d",&num);
                    rem=0;sum=0;
                    dup=num;
                    while(num>0)
                    {
                    rem=num%10;
                    sum=sum+(rem*rem*rem);
                    num=num/10;
                    }
                    if(sum==dup)
                    printf("\n the number is armstrong");
                    else
                    printf("\n the number is not armstrong");
                    break;
                }
            
                    
        
            case 3:
                {
                printf("Enter number: ");
                scanf("%d", &num);
                fact = 1;
                for(i = 1; i <= num; i++)
                {
                    fact = fact*i;
                }
                printf("\n\nFactorial value of %d is = %lu\n\n\n",num,fact);
                break;
                }
        
            case 4:
                printf("exit");
                exit(0);    
        }
    }
    
    return 0;
}

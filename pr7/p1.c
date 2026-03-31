#include <stdio.h>

int main() 
{
    int choice,x,y;
    
    printf("Enter The Value of X:- ");
    scanf("%d",&x);
    printf("Enter The Value of y:- ");
    scanf("%d",&y);
    
    printf("Enter The Value of Choice:- ");
    scanf("%d",&choice);
    
    switch(choice)
    {
        case 1:
            printf("Addition of %d Two number%d sum %d",x,y,x + y);
        break;
        
        case 2:
            printf("sub of %d Two number%d sum %d",x,y,x - y);
        break;
        
        case 3:
            printf("mul of %d Two number%d sum %d",x,y,x * y);
        break;
        
        case 4:
            printf("div of %d Two number%d sum %d",x,y,x / y);
        break;
        
        case 5:
            printf("modulo of %d Two number%d sum %d",x,y,x % y);
        break;
        
        default:
            printf("Invalid Choice");
        break;
    }
    return 0;
}

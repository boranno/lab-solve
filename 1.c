#include<stdio.h>
int main()
{
    int num1,num2,value;
    char ch;
    scanf("%d %c %d",&num1,&ch,&num2);
    switch(ch)
    {
    case '+':
        value=num1+num2;
        break;
    case '-':
        value=num1-num2;
        break;

    case '*':
        value=num1*num2;
        break;
    case '/':
        value=num1/num2;
        break;
    default:
        printf("invalid operation\n");
    }
    printf("%d\n",value);
    return 0;
}

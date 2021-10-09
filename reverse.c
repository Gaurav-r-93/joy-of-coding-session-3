 #include<stdio.h>
int main()
{
    int num;
    printf("enter the number");
    scanf("%d",&num);
    printf("the reverse number is");
    while(num > 0) 
    {
        int mod = num % 10; 
        printf("%d",mod); 
        num = num / 10;     
    }
    return 0;
}

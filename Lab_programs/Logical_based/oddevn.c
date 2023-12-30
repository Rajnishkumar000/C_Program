#include<stdio.h>
#include<stdbool.h>

bool evenOdd(int n)
{
    if(n%2==0)
    {
        return true;
    }
    else 
    return false;
}



//AREA AND PERIMETER
double area(double r)
{
    return 3.14*r*r;
}
double circum(double r)
{
    return 2*3.14*r;
}
//FIBONACCI SERIES
void fibo(int n)
{
    int c;
    int a=0,b=1;
    while(n>0){
    printf("%d ",a);
    c=a;
    a=b;
    b=c+b;
    n--;


    }
    
   
    

}

int fibonacci(int num)
{
    if (num <= 1)
    {
        return num;
    }

    else
    {
        return fibonacci(num - 1) + fibonacci(num - 2); 
}

}
   




void main()
{
    double num;
    printf("Enter the number ");
    scanf("%lf",&num);
    // bool c=evenOdd(num);
    // if(c)
    // {
    //     printf("even no ");
 
    // }
    // else{
    //     printf("odd number ");
    // }
    // return 0;
    // printf("%f",area(num));
    // printf("\n");
    // printf("%f",circum(num));
    // printf("\n");
    for (int i = 0; i < num; i++)
    {
        printf("%d, ", fibonacci(i));
    }

    // fibo(5);

}

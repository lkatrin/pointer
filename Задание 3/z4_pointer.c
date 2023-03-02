/*Написать функцию swap, которая меняет значения переданных аргументов
Например, после вызова swap(a, b) в переменной a должно оказаться значение b, а в переменной b значение a*/

#include <stdio.h>
    int swap(int a,int b)
    {
        int *p_1,*p_2;
        p_1=&a;
        p_2=&b;
        
        int temp;
        temp = *p_1;
        *p_1 = *p_2;
        *p_2 = temp;
        printf("%d %d",*p_1,*p_2);
    }
int main()
{
    int a1,b1;
    scanf("%d",&a1);
    scanf("%d",&b1);
    swap(a1,b1);
}
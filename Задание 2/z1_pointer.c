/*
Напишите программу, которая выводит размеры типов данных, указанных ниже.
char, char*, char**
int, int*, int**
float, float*, float**
double, double*, double**
*/

#include <stdio.h>
int main()
{
    printf("%ld, %ld, %ld\n",sizeof(char),sizeof(char*),sizeof(char**));
    printf("%ld, %ld, %ld\n",sizeof(int),sizeof(int*),sizeof(int**));
    printf("%ld, %ld, %ld\n",sizeof(float),sizeof(float*),sizeof(float**));
    printf("%ld, %ld, %ld\n",sizeof(double),sizeof(double*),sizeof(double**));
}

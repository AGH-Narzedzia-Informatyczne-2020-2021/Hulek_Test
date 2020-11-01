#include <stdio.h>
#include <stdbool.h>

bool isFirst(int a);

int main()
{
    int num;
    printf("Wprowadz liczbe: ");
    scanf("%d",&num);
    isFirst(num)?printf("%d jest liczba pierwsza",num):printf("%d nie jest liczba pierwsza",num);
    return 0;
}

bool isFirst(int a)
{
    if(a<=1)
    {
        return 0;
    }
    for(int i=3;i<a/2;i+=2)
    {
        if(a%i==0)  return 0;
    }
    return 1;
}

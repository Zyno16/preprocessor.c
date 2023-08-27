#include <stdio.h>
#include <stdlib.h>
#define num 77
#define x y
#define y 10
#define sayhello "hello""#""omar"
#define sayhello1() printf("hello %s",sayhello1())

int main()
{
    printf("%d\n",num);
    printf("%d",y);
    printf("%s%s\n","welcome","zino");
    printf("%s%s","12","12");
    printf("%s\n",sayhello);
    sayhello1(amr);
    return 0;
}

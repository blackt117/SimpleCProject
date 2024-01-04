#include <stdio.h>
#include <stdlib.h>

//Generates multiple lines of code
#define CONST 10
const int b = 20;
char char_test = 'A';
int times;
int init = 1;
char title()
{
    return "Hello";
}
int main()
{
	scanf("%d",&times);
	for (int q =0; q < times; q++)
    {
        if (q%2==0)
        {
            for(int i=0; i < 7; i++)
            {
                char char_test2 = char_test + i;
                printf("%d%c ",init,(char_test+i));
            }
            printf("\n");
            init = init + 1;
        }
        else
        {
            for (int t = 0; t < b; t++)
            {
                printf("=");
            }
            printf("\n");
        }
    }
    printf("%s",title());
	return 0;
}

#include <stdio.h>
int main()
{
    long long int a=15, b=5, c;
    if(a>=0)
    {
        c=a-b;
    }
    else
    {
        c=a+b;
	c=c-b;/*c=a*/
    }
    printf("%lld\n",c);
    return 0;
}

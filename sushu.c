# include <stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    for (i=2;i<=a;i++)
    {
	if(a%i==0&&i!=a)
	{
	    printf("no");
	    break;
	}
	else if(i==a)
	{
	    printf("yes");
	}
    }
    return 0;
}

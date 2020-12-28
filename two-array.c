# include <stdio.h>
int main ()
{
    int a[2][4]={{23,23},{21,21}};
    int*p[2];
    int i,j;
    for(i=0;i<2;i++)
    {
	p[i]=a[i];
    }
    for(i=0;i<2;i++)
    {
	for(j=0;j<2;j++)
	printf("%d\n",*(p[i]+j));
    }
    return 0;
}

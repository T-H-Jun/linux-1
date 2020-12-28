# include <stdio.h>
int main ()
{
    int a,i,j,p;
    scanf("%d",&a);
    for (i=0;i<5;i++)
    {
	for(j=0;j<4-i;j++)
	{
	    printf(" ");
	}
	for(p=0;p<i;p++)
	{
	    printf("%d ",i);
	}
	printf("\n");
    }
    return 0;
}

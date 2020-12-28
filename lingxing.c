# include <stdio.h>
void lingxing(int a)
{
    int b,i,j,m;
    b=a/2;
    for(i=0;i<b;i++)
    {
	for(j=0;j<b-i;j++)
	{
	    printf(" ");
	}
	for(m=0;m<i+1;m++)
	{
	    printf("* ");
	}
	printf("\n");
    }
    for(i=0;i<b+1;i++)
    printf("* ");
    printf("\n");
    for(i=0;i<b;i++)
    {
	for(j=0;j<i+1;j++)
	{
	    printf(" ");
	}
	for(m=0;m<b-i;m++)
	{
	    printf("* ");
	}
	printf("\n");
    }
}
int main()
{
    int a;
    printf("the size of 'lingxing'(input number-the number must be Odd number):");
    scanf("%d",&a);
    lingxing(a);
}

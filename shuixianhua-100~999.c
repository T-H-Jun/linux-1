# include <stdio.h>
void num(int m)
{
    int a, b, c;
    if(100<=m<1000)
    {
	a=m/100;
	b=m/10%10;
	c=m%10;
	if(a*a*a+b*b*b+c*c*c==m)
	printf("Yes!");
	else
	printf("No!");
    }
}
int main()
{
    int a;
    scanf("%d",&a);
    num(a);

    return 0;
}

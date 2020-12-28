# include <stdio.h>
# include <malloc.h>
struct num
{
    int a;
    struct num *next;
};
struct num *creatlist()
{
    struct num *head=(struct num*)malloc(sizeof(struct num));
    head->next=NULL;
    struct num *tail;
    tail=head;
    
    printf("how many point do you want:");
    int a,i,val;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
	struct num *pnew=(struct num*)malloc(sizeof(struct num));
	printf("the %d number you want to input:",i+1);
	scanf("%d",&val);
	pnew->a=val;
	pnew->next=NULL;
	tail->next=pnew;
	tail=pnew;
    }
    return head;
}
void output(struct num *m)
{
    struct num *p=m->next;
    while(p!=NULL)
    {
	printf("%d\n",p->a);
	p=p->next;
    }
}
void insert(struct num *m)
{
    struct num *p;
    p=m;
    printf("which point do you want to insert:");
    int a,i,val;
    scanf("%d",&a);
    for(i=1;i<a;i++)
    {
	p=p->next;
    }
    struct num *pnew=(struct num*)malloc(sizeof(struct num));
    printf("input the number which you want to insert:");
    scanf("%d",&val);
    pnew->a=val;
    pnew->next=p->next;
    p->next=pnew;
}
void del(struct num *m)
{
    int a,i;
    printf("which point do you want to delete:");
    scanf("%d",&a);
    struct num *p=m,*q;
    for(i=0;i<a;i++)
    {
	q=p;
	p=p->next;
    }
    q->next=p->next;
    free(p);
}
int main()
{
    struct num *m;
    m=creatlist();
    output(m);
    insert(m);
    output(m);
    del(m);
    output(m);
}











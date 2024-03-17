 #include<stdio.h>
#include<stdlib.h>
struct Stack
{
    int data;
    struct Stack *link;
};
typedef struct Stack *stk;
stk push(stk);
stk pop(stk);
void display(stk);
stk create();
int main()
{
    stk f=NULL;
    int choice;
    while(1)
    {printf("1.PUSH\n2.POP\n3.Display\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:f=push(f);
        break;
        case 2:f=pop(f);
        break;
        case 3:display(f);
        break;
        default: exit(0);

    }
  }
}
void display(stk f)
{
    stk c;
    printf("\n");
    if(f==NULL)
    {
        printf("Underflow\n");
    }

    c=f;
    while(c!=NULL)
    {
        printf("%d\n", c->data);
        c=c->link;
    }
    printf("\n");
}
stk push(stk f)
{
    stk t;
    t=create();
    t->link=f;
    f=t;
    return f;
}
stk create()
{
    stk n;
    n=malloc(sizeof(struct Stack));
    printf("Enter value");
    scanf("%d", &n->data);
    n->link=NULL;
    return n;
}
stk pop(stk f)
{
    stk c;
    if(f==NULL)
        {printf("underflow\n");
        return f;}
    else if(f->link==NULL)
        {   printf("element to be deleted=%d\n",f->data);
            return NULL;}
    else
    {
        c=f;
        f=c->link;
        printf("element to be deleted=%d\n",c->data);
        free(c);
        return f;
    }
}

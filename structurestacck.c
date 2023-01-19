 #include <stdio.h>
# define SIZE 10
struct stack1
{
int top1;
int top2;
int stack[SIZE];
};

void create(struct stack1 *s)
{
    s->top1=-1;
    s->top2=SIZE;
}
void push1(struct stack1 *s, int d)
{
    if(s->top1<s->top2-1)
    {
        s->top1++;
        s->stack[s->top1]=d;
        printf("%d\n",s->stack[s->top1]);
    }
    else
    {
        printf("stack overflow");
    }
}
void push2(struct stack1 *s, int d)
{
    if(s->top1<s->top2-1)
    {
        s->top2--;
        s->stack[s->top2]=d;
        printf("%d \t", s->stack[s->top2]);
    }
    else
    {
        printf("stack overflow 2");
    }
}
void pop1(struct stack1 *s)
{
    if(s->top1>=0)
    {
        int e=s->top1--;
        printf("element is poped");
    }
    else
    {
        printf("underflow 1");
    }
}
void pop2(struct stack1 *s)
{
    if(s->top2<=SIZE)
    {
        int e=s->top2--;
        printf("element is poped");
    }
    else
    {
        printf("underflow 2");
        
    }
}

int main() {
    //struct stack st s=(st)malloc(sizeof(st));
    struct stack1 st, *s;
    s=&st;
    create(s);
    printf("enter the element\n");
    push1(s,90);
    push1(s,60);
    push1(s,50);
    push1(s,40);
    push1(s,30);
    push1(s,10);
    push2(s,70);
    push2(s,76);
    push2(s,78);
    push2(s,72);
    //pop1();
    return 0;
}

#include<iostream>
using namespace std;
int top = -1;
void push(char *e)
{
    stack[++top] = e;
}
char pop()
{
    char *x;
    if(stack[top] == -1)
    {
        return 0;
    }
    else
    {
        x = pop(top--);
    }
    return x;
}

int priority()
{

}

int main()
{
    string exp;
    char* e,x;
    cout<<"enter the expression\n";
    cin>>exp;
    e = exp;
    while(*e != '\o')
    {
        if(isalnum(*e))
        {
            cout<<*e;
        }
        else
        {
            if(*e == '(')
            {
                push(*e);
            }
        }
        else
        {
            if(*e == ')')
            {
                while((x = pop()) != '(')
                {
                    cout<<x;
                }
            }
        }
        else(priority(stack[top]) > priority(*e))
        {
            cout<<stack[top];
            push(*e);
        }
        e++;

    }
}

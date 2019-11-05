#include <iostream>
using namespace std;
int top=-1;
void push(int stack[],int num,int n)
{
    if(top == n-1)
    cout<<"the stack is full"<<endl;
    else
    {
    top=top+1;
    stack[top]=num;
    }
    
}
void pop()
{
    if(top == -1)
    {
        cout<<"Stack is empty"<<endl;
    }
    else
    top= top-1;
}

int main(){
int stack[3];
push(stack,5,3);
cout<<"Current stack size is "<<sizeof(stack) <<endl;
push(stack,10,3);
push(stack,21,3);
push(stack,35,3);
cout<<"Current stack size is"<<sizeof(stack) <<endl;
pop();
cout<<"Current top value is "<<stack[top]<<endl;
}

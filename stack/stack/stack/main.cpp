#include <iostream>
#include <cstdlib>

using namespace std;

int top,st[1000];

void push(int x){
    st[++top]=x;
}

int pop(){
    top--;
    return st[top+1];
}

int main(){
    char ch[100];
    int a,b;
    top = 0;
    
    while(scanf("%s",ch)!=EOF){
        
        if(ch[0]=='+'){
            a=pop();
            b=pop();
            push(a+b);

        }
        else if(ch[0]=='*'){
            a=pop();
            b=pop();
            push(a*b);

        }
        else if(ch[0]=='-'){
            b=pop();
            a=pop();
            push(a-b);

        }
        else{
            push(atoi(ch));
        }
    }

    printf("%d\n",pop());
    return 0;
}

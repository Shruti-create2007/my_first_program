#include<iostream>
#define max 5
using namespace std;

class stack{
    private:
    int top;
    int a[max];

    public:
    stack(){
        top=-1;

    }
     
    void empty(){
        if(top==-1){
            cout<<"1";}
            else
            cout<<"0";        
    }

    void full(){
        if(top==max-1){
            cout<<"1" ;}
            else
            cout<<"0";

        

    }
    void push(int x){
        top++;
        a[top]=x;
    }

    void pop(){
        int x=a[top];
        top--;
    }

    void display(){
        for(int i=top;i>=0;i--){
            cout<<a[i]<<endl;
        }
    }
};

int main(){
    stack s;
    s.full();
    cout<<endl;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    s.display();

    s.pop();
    s.display();

    
    return 0;
}

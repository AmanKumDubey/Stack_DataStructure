
#include<iostream>
#include<stack>


using namespace std;


class Stack{
    public:
    int *arr;
    int top;
    int size;

Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }

void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"Stack is overflow"<<endl;
        }
    }
void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack is underflow "<<endl;
        }
    }

int peak(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"Stack is Empty "<<endl;
            return -1;
        }
    }
bool  isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){


    Stack st(5);

    st.push(22);
    st.push(24);
    st.push(26);
    st.push(28);
    st.push(30);

    cout<<st.peak()<<endl;
    st.pop();

    cout<<st.peak()<<endl;

    if(isEmpty()){
        cout<<"Stack is empty "<<emdl;
    }
    else{
        cout<<"Stack is not Empty "<<endl;
    }




    return 0;
}

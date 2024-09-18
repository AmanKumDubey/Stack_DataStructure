#include<iostream>
#include<stack>
using namespace std;

// Delete middle element from the stack


void solve(stack<int>s, int count, int size){

    if(count==size/2){
        s.pop();
        return;
    }

    int num=s.top();
    s.pop();

    solve(s,count+1,size);

    s.push(num);
}
int main(){

    stack<int>str;

    int n;
    cout<<"Enter the size of stack :";
    cin>>n;
    cout<<endl;

    for(int i=0;i<n;i++){
        str.push(i);
    }

    for(int i=0;i<n;i++){
        cout<<"Stack element is: "<<s
    }

    return 0;
}
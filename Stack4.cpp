#include<bits/stdc++.h>
#include<stack>

using namespace std;


// Valid Parenthesis 

int main(){

    stack<int>s;
    for(int i=0;i<5;i++){
        s.push(i);
    }

    vector<int>ans(5);
    for(int i=0;i<5;i++){
        ans[i]=s.top();
        s.pop();

    }
    cout<<endl;

for(int i=0;i<5;i++){
    cout<<ans[i]<<" ";
}
stack<int>st;
int mini=INT_MAX;
for(int i=0;i<5;i++){
    int curr=s.top();
    st.push(ans[i]);
    mini=min(mini,curr);
    s.pop();
} 
cout<<endl;
cout<<"The minimum stack is : "<<mini;

    return 0;
}
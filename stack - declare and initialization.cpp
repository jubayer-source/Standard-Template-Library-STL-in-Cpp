#include <bits/stdc++.h>
using namespace std;

void print(stack<int> st){
    while(!st.empty()) {
        cout <<st.top() << " ";
        st.pop();
    }
}

int main() {
    
    stack<int> st1;
    
    st1.push(10);
    st1.push(20);
    st1.push(30);
    st1.push(40);
    
    
    // create another stack from st1
    stack<int> st2(st1);
    print(st1);
    cout <<endl;
    print(st2);
    
    return 0;
}

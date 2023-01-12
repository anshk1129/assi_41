#include<bits/stdc++.h>
using namespace std;
int main(){
deque<int>dq;
dq={10,20,30,40};
deque<int>::iterator iq;
iq=dq.begin();//10,20,30,40
iq++;//now iq is pointing to 20
dq.insert(iq,25);
for(auto i:dq){
    cout<<i<<" ";
}



    return 0;
}
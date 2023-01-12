#include<bits/stdc++.h>
using namespace std;
int main(){
deque<int>dq;
dq={10,20,30,40};
deque<int>::iterator r;
r=dq.begin();
dq.erase(r,dq.end()-2);
for(auto i:dq){
    cout<<i<<" ";
}
return 0;
}
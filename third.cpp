#include<bits/stdc++.h>
using namespace std;
int main(){
deque<int>dq;
dq={10,20,30,40};
for(auto i=dq.rbegin();i!=dq.rend();i++){
    cout<<*i<<" ";
}
return 0;
}
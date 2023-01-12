#include<bits/stdc++.h>
using namespace std;
int main(){
deque<int>dq,dq1;
dq={10,20,30,40};
for(auto i=dq.begin();i!=dq.end();i++){
    cout<<*i<<" ";
}
cout<<endl;
dq1.assign(dq.begin()+1,dq.end());
for(auto i=dq1.begin();i!=dq1.end();i++){
    cout<<*i<<" ";
}
return 0;
}
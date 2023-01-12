#include<bits/stdc++.h>
using namespace std;
int main(){
deque<int>dq;
dq={10,20,30,40};
deque<int>::const_iterator ci;
for(ci=dq.begin();ci!=dq.end();ci++)
cout<<*ci<<"  "; 
return 0;
}
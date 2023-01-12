#include<bits/stdc++.h>
using namespace std;
string remove_hash(string s);
string remove_hash(string s){
deque<char>dq;
for(int i=0;i<s.length();i++){
    if(s[i]!='#'){
        dq.push_back(s[i]);
    }
    else {
        if(!dq.empty()){
            dq.pop_back();
        }
    }
}
string ans="";
while(!dq.empty()){
    ans=ans+dq.front();
    dq.pop_front();
}
return ans;
}
int main(){
string s="###waGFIG##";
cout<<"String looks like ->"<<remove_hash(s)<<" after removing #"<<endl;
return 0;
}
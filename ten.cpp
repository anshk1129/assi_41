#include<iostream>
#include<deque>
#include<string>
using namespace std;
bool similar(string s,string s1);
int main(){
string s="Hello how are you";
string s1="Hello you";
if(similar(s,s1)){
    cout<<"True";
}
else 
cout<<"False";
    return 0;
}
bool similar(string s,string s1){
    deque<string>ss,ss1;
    string temp="";
    int m=s.size();
    int n=s1.size();
    for(int i=0;i<m;i++){
        if(s[i]!=' ')
       temp=temp+s[i];
       else{
        ss.push_back(temp);
        temp="";
       }
    }
    ss.push_back(temp);
    temp="";
    for(int i=0;i<n;i++){
        if(s1[i]!=' ')
       temp=temp+s1[i];
       else{
        ss1.push_back(temp);
        temp="";
       }
    }
    ss1.push_back(temp);
  while(ss.size()>0&&ss1.size()>0&&ss.front()==ss1.front()){
    ss.pop_front();
    ss1.pop_front();
  }
    while(ss.size()>0&&ss1.size()>0&&ss.back()==ss1.back()){
    ss.pop_back();
    ss1.pop_back();
  }
  if(ss.size()==0||ss1.size()==0){
    return true;
  }
    return false;
}
#include<bits/stdc++.h>
using namespace std;
void make_permutation(int n,int k);
void make_permutation(int n,int k){
deque<int>dq;
vector <int>v;
int val=1;
for(int i=1;i<=n;i++){
    dq.push_back(i);
}
while(k>=-1){
    int i;
    if(val==1){
     i=dq.back();
    dq.pop_back();
    val=0;
    }
    else{
        i=dq.front();
        dq.pop_front();
        val=1;
    }
    v.push_back(i);
    k--;
}
for(int i=0;i<n;i++){
    cout<<v[i]<<"  ";
}
}
int main(){
    int n=6;
    int k=4;
    make_permutation(n,k);
    return 0;
}
//adjacent element ka difference alg alg hona chaiye 6-1,1-5 to adjacent ka difference alg h 5 h fir 4 h 
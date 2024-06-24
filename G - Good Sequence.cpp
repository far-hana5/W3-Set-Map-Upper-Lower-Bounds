#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
ll n;cin>>n;
unordered_map<ll,ll>m;
for(ll i=0;n>i;i++){
        ll c;
    cin>>c;
m[c]++;
}
ll sum=0;

for(auto it=m.begin();it!=m.end();it++){
    if(it->first>it->second){
        sum=sum+it->second;
    }else if(it->first<it->second){
     sum=sum+(it->second-it->first);
    }
}
cout<<sum<<endl;
}


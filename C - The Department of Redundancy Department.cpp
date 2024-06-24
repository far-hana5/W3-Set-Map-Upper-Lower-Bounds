#include<bits/stdc++.h>
using namespace std;

int main(){
int q;vector<int>s;map<int,int>m;
while(cin>>q){
    s.push_back(q);
    m[q]++;
}

for(auto el:s){
  if(m[el]!=0)  {
     cout << el << " " << m[el] << endl;
            m[el] = 0;
  }
}
}

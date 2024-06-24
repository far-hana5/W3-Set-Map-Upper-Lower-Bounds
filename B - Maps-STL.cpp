#include <bits/stdc++.h>
using namespace std;
int main() {
   int q;cin>>q;
       map<string,int>m;
   while(q--){
    int type;cin>>type;

    if(type==1){
        string name;int num;
        cin>>name>>num;
       m[name]=m[name]+num;
         //m[name] += num;
    }else if(type==2){
    string name;cin>>name;
    m.erase(name);
    }else if(type==3){
     string name;cin>>name;
       if (m.find(name) != m.end()) {
                cout << m[name] << endl;
            } else {
                cout << 0 << endl;
            }
    }
   }
}


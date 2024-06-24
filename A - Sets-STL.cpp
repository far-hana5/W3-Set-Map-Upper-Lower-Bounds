#include <bits/stdc++.h>
using namespace std;
int main() {
    multiset<int> m;
    int q,y,x;
    cin>>q;
    while(q--){
        cin>>y>>x;
        if(y==1){
            m.insert(x);
        }else if(y==2){

        m.erase(x);

        }else{
            if(m.find(x)!=m.end()){
                cout<<"Yes"<<endl;
            }else{
            cout<<"No"<<endl;
            }

        }

    }
}

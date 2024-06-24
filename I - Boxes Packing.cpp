#include<bits/stdc++.h>
using namespace std;

int main()
{

    long long n, a;
    map<int, int> mp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        mp[a]++;
    }
    long long ans = 0, temp;
    map<int, int>::iterator itr;
    for (itr = mp.begin(); itr != mp.end(); itr++)
    {
        temp = itr->second;
        ans = max(ans, temp);
    }
    cout << ans << endl;
}

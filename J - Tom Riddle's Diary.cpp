#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_set<string> m;
    int n;
    string a[102];
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];

        if (m.find(a[i]) == m.end()) {
            cout << "NO" << endl;
            m.insert(a[i]);
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}

/*int main()
{
    int n,i,j;
    string s[102];
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
    	cin>>s[i];
    	for(j=0;j<i;j++)
    	{
    		if(s[i]==s[j])
    			break;
    	}
    	if(j==i)
    		printf("NO\n");
    	else
    		printf("YES\n");
    }
    return 0;
}*/

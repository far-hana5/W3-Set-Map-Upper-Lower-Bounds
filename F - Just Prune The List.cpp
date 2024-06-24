
#include<bits/stdc++.h>
using namespace std;
int main() {

    int T;
    cin >> T;
    while (T--) {
        int n, m, x;
        cin >> n >> m;

        map<int, int> r;

        for (int i = 0; i < n; i++) {
            cin >> x;
            r[x]++;
        }

        for (int i = 0; i < m; i++) {
            cin >> x;
            r[x]--;
        }

        int ans = 0;

        for (auto it = r.begin(); it != r.end(); it++) {
            ans += abs(it->second);
        }
        cout << ans << "\n";
    }
    return 0;
}

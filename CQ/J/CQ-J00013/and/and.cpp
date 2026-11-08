#include<bits/stdc++.h>
using namespace std;
#define int long long

const int N = 5e5+5;
const int M = 3e5+5;
int a[N], b[M];
int n, m;
int q[N];
int head, len;


signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    freopen("and.in", "r", stdin);
    freopen("and.out", "w", stdout);

    cin >> n >> m;
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    for(int i = 1; i <= n; i++) {
        head = 0, len = 0;
        for(int j = i; j <= n; j++) {
            q[head+len] = a[j];

            len++;cout << len;for(int i = head; i <= head+len-1; i++) {
            cout << q[i] << ' ';
            }cout << endl;
            for(int k = head; k < head+len-1; k++) {
                if(q[k] == a[j]) {

                    len -= head-k;head = k;
                    break;
                }
            }
        }
        for(int i = head; i <= head+len-1; i++) {
            //cout << i << ' ';
        }
        cout << endl;
    }
}

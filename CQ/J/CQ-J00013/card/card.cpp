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

    freopen("card.in", "r", stdin);
    freopen("card.out", "w", stdout);

    cin >> n >> m;
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    for(int i = 1; i <= n; i++) {
        head = 0, len = 0;
        for(int j = i; j <= n; j++) {
            q[head+len] = a[j];

            len++;
            for(int k = head; k < head+len-1; k++) {
                if(q[k] == a[j]) {

                    head = head+len-1;
                    len = 1;
                    break;
                }
            }
        }
        for(int j = head; j <= head+len-1; j++) {
            b[q[j]]++;
        }
    }
    for(int i = 1; i <= m; i++) {
        cout << b[i] << ' ';
    }
}

/*
10 3
2 3 1 2 1 3 2 3 1 2 1*/

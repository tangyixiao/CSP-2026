#include <bits/stdc++.h>
using namespace std;

struct node{
    int len;
    char ch;
};

int main() {
    vector<node> a;
    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        node tmp;
        cin >> tmp.len >> tmp.ch;
        a.push_back(tmp);
    }
    if(n == 1){
        cout << 0;
        return 0;
    } else if(n == 2) {
        if(a[1].ch == a[2].ch) {
            cout << 0;
        } else {
            cout << min(a[1].len, a[2].len);
        }
    }
}
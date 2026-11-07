#include <bits/stdc++.h>
using namespace std;
string s;
int n,cnt;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
    cin >> n;
    s += '_';
    for(int i = 1;i <= n;i++) {
        int a;char b;
        cin >> a >> b;
        while(a--) s += b;
    }
    int len = s.length() - 1;
    for(int i = 1;i <= len / 2;i++)
        if(s[i] != s[len-i+1]) cnt++;
    cout << cnt;
    return 0;
}

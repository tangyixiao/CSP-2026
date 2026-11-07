#include <bits/stdc++.h>
using namespace std;
int n,m,a[200005],tot[300005],s[300005],top;
bool cnt[300005];
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    for(int i = 1;i <= n;i++)
        cin >> a[i];
    for(int times = 1;times <= n;times++) {
        top = 0;
        for(int i = times;i <= n;i++) {
            for(int j = 1;j <= top;j++)
                if(s[j] == a[i]) top = j - 1;
            s[++top] = a[i];
        }
        for(int i = 1;i <= top;i++)
            tot[s[i]]++;
    }
    for(int i = 1;i <= m;i++)
        cout << tot[i] << ' ';
    return 0;
}

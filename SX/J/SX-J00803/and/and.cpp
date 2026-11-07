#include<bits/stdc++.h>
using namespace std;
const int N = 2e5+5;
int n,m,a[N],b[N];
int s[35];
void upd(int x) {
    for(int i = 1; i<=n; i++) {
        if(b[i]==0&&((a[i]>>x)&1)==0) {
            b[i] = 1;
            for(int j = x-1; j>=0; j--) {
                if(((a[i]>>j)&1)==1) {
                    s[j]--;
                }
            }
        }
    }
}
signed main() {
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin>>n>>m;
    for(int i = 1; i<=n; i++) {
        cin>>a[i];
        int k = a[i];
        for(int j = 0; j<=30; j++) {
            if((k>>j)&1) {
                s[j]++;
            }
        }
    }

    int ans = 0;
    for(int i = 30; i>=0; i--) {
        if(s[i]>=m) {
            ans+=1<<i;
            upd(i);
        }
    }

    cout<<ans;
    return 0;
}

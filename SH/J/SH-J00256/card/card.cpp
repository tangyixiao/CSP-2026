#include <bits/stdc++.h>
using namespace std;
int n,m;
int cnt[300005];
int pre[300005];
int a[500005];

void solve(int i){
    if(i == n-1){
        cnt[i]++;
        return;
    }
    memset(pre,-1,sizeof(pre));
    int lst[500005];
    int c = i;
    for(int j = i;j < n;j++){
        if(pre[a[j]] == -1){
            pre[a[j]] = j;
            lst[c] = a[j];
            c++;
        } 
        else{
        	int s = pre[a[j]];
        	for(c = c;c>=pre[a[j]];c--){
        		pre[lst[c]] = -1;
        		lst[c] = 0;
			}
            c = s;
            pre[a[j]] = -1;
        }
    }
    for(int k = 0;k < c;k++) cnt[lst[k]]++;
}

int main(void){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    cin >> n >> m;
    memset(cnt,0,sizeof(cnt));
    for(int i = 0;i < n;i++)cin >> a[i];
    for(int i = 0;i < n;i++)solve(i);
    cout << cnt[1];
    for(int i = 2;i <= m;i++)cout << ' ' << cnt[i];
    cout << endl;
    return 0;
}

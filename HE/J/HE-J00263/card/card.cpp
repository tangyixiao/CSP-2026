#include <bits/stdc++.h>
using namespace std;
const int N=5e5+5;
int a[N],f[N],k[N];
stack<int> h;
int n,m;
void solve(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int i=1;i<=n;i++){
			f[i]=0;
		}
		for(int j=i;j<=n;j++){
			if(f[a[i]]>0){
				while(1){
					if(h.top()==a[i]){
						h.pop();
						break;
					}
					h.pop();
				}
			}else{
				f[a[i]]++;
			}
			h.push(a[i]);
		}
		while(!h.empty()){
			k[h.top()]++;
			h.pop();
		}
	}
	for(int i=1;i<=m;i++){
		cout<<k[i]<<" ";
	}
    return;
}
int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);

    ios::sync_with_stdio(false);
    cin.tie(0);

    int t=1;
    while(t--){
        solve();
    }

    return 0;
}

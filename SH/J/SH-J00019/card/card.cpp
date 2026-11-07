#include<bits/stdc++.h>
using namespace std;
const int N=5e5,M=3e5;

int n,m;
int a[N+5],ad[M+5],nxt[N+5],ans[M+5];
bool taska=1;

void solve(){
	for(int i=n;i>=1;i--){
    	nxt[i]=ad[a[i]];
    	ad[a[i]]=i;
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;){
			if(nxt[j]) j=nxt[j];
			else ans[a[j]]++,j++;
		}
	}
	for(int i=1;i<=m;i++)
		cout<<ans[i]<<' ';
}

void solvea(){
	for(int i=n;i>=1;i--){
    	nxt[i]=ad[a[i]];
    	ad[a[i]]=i;
	}
	for(int i=1;i<=n;i++){
		if(nxt[i]==0) cout<<i<<' ';
	}
}

int main(){
    freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
    	if(a[i]<a[i-1]) taska=0;
	}
	if(taska) solvea();
	else solve();
    return 0;
}

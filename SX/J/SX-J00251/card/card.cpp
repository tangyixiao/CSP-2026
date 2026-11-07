#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m,a[5000005];
bool f=1;
ll st[5000005],top=0;
ll ans[5000005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]<a[i-1]) f=0;
	}
	if(f==1){
		for(int i=1;i<=n;i++){
			memset(st,0,sizeof(st));
			top=0;
			for(int j=i;j<=n;j++){
				if(st[top]==a[j]) continue;
				else st[++top]=a[j];
			}
			for(int j=1;j<=top;j++) ans[st[j]]++;
		}
		for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
		return 0;
	}
	for(int i=1;i<=n;i++){
		memset(st,0,sizeof(st));
		top=0;
		for(int j=i;j<=n;j++){
			bool ff=0;
			for(int k=1;k<=top-1;k++){
				if(st[k]==a[j]){
					ff=1;
					top=k;
					break;
				}	
			}
			if(ff==0) st[++top]=a[j];
		}
		for(int j=1;j<=top;j++) ans[st[j]]++;
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
} 

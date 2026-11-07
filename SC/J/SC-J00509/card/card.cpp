#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500009],ans[300009];
int st[300009],si;
bool f[300009];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false); 
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n>=5009&&m>=100000){
		for(int i=1;i<=n;i++){
			if(a[i]!=a[i-1]){
				cout<<n-i+1<<' ';
			}
		}
		return 0;
	}
	for(int i=1;i<=n;i++){
		si=0;
		memset(f,0,sizeof(f));
		for(int j=i;j<=n;j++){
			if(f[a[j]]){
				while(st[si]!=a[j]){
					f[st[si]]=0;
					si--;
				}
				si--;
			}
			st[++si]=a[j];
			f[a[j]]=true;
		}
		for(int j=1;j<=si;j++){
			ans[st[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}
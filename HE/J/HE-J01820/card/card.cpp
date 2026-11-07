#include<bits/stdc++.h>
using namespace std;
int a[5*100000+10];
int f[3*100000+10];
int ans[3*100000+10];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		f[a[i]]=i;
	}
	for(int j=1;j<=n;j++){
		for(int i=j;i<=n;i++){
			if(f[a[i]]==i){
				ans[a[i]]++;
			}else{
				ans[a[i]]++;
				i=f[a[i]];
			}
			
		}
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],b[300005],flag=1;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]<a[i-1])flag=0;
	}
	if(m==1){
		cout<<n;
		return 0;
	}
	if(m==2){
		for(int i=1;i<=n;i++){
			b[a[n]]++;
			if(a[i]!=a[n])b[a[i]]++;
		}
		cout<<b[1]<<' '<<b[2];
		return 0;
	}
	if(flag==1){
		for(int i=n;i>=1;i--){
			b[a[i]]=max(i,b[a[i]]);
		}
		for(int i=1;i<=m;i++){
			cout<<b[i]<<' ';
		}
		return 0;
	}
	for(int i=1;i<=n;i++){
		int j=i,f;
		while(j<=n){
			f=0;
			for(int k=j+1;k<=n;k++){
				if(a[k]==a[j]){
					f=1;
					j=k;
					break;
				}
			}
			if(f==1)continue;
			else{
				b[a[j]]++;
				j++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<b[i]<<' ';
	}
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
long long a[500005],c[500005],ans[500005],s[500005],len,n,m;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	if(m<=500){
		for(int k=1;k<=n;k++){
			len=0;
			for(int i=k;i<=n;i++){
				for(int j=0;j<len;j++){
					if(c[j]==a[i]){
						len=j;
						break;	
					}
				}
				c[len++]=a[i];
			}
			for(int i=0;i<len;i++) ans[c[i]]++;
		}
		for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
		cout<<"\n";
	}else{
		for(int i=1;i<=n;i++){
			if(a[i+1]!=a[i]) ans[a[i]]=i;
		}
		for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
		cout<<"\n";
	}
	return 0;
}

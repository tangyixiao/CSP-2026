#include<bits/stdc++.h>
using namespace std;
int n,m,ans[500005],a[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	if(m==1){
		for(int i=1;i<m;i++) cout<<"0 ";
		cout<<n;
		return 0;
	}
	for(int i=1;i<=n;i++){
		bool s[500005]={false};
		for(int j=i;j<=n;j++){
			s[i]=true;
			bool flag=false;
			for(int k=i;k<j;k++){
				if(a[k]==a[j]) flag=true;
				if(flag) s[k]=false;
			}
		}
		for(int j=i;j<=n;j++) if(s[j]) ans[a[j]]++; 
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}

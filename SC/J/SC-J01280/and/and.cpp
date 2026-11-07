#include<bits/stdc++.h>
using namespace std;
int n,m,aa[200010],f[200010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	int mx=-1e9;
	if(m==1){
		for(int i=1;i<=n;i++){
			cin>>aa[i];
			mx=max(mx,aa[i]);
		}cout<<mx;
	}else{
		for(int i=1;i<=n;i++)cin>>aa[i];
		if(m==2){
			for(int i=1;i<=n;i++)for(int j=i+1;j<=n;j++)mx=max(mx,(aa[i]&aa[j]));
			cout<<mx;
		}else if(m==3){
			for(int i=1;i<=n;i++)for(int j=i+1;j<=n;j++)for(int o=j+1;o<=n;o++)mx=max(mx,aa[i]&aa[j]&aa[o]);
			cout<<mx;
		}else if(m==4){
			for(int i=1;i<=n;i++)for(int j=i+1;j<=n;j++)for(int o=j+1;o<=n;o++)for(int p=o+1;p<=n;p++)mx=max(mx,(aa[i]&aa[j]&aa[o]&aa[p]));
			cout<<mx;
		}else if(m==5){
			for(int i=1;i<=n;i++)for(int j=i+1;j<=n;j++)for(int o=j+1;o<=n;o++)for(int p=o+1;p<=n;p++)for(int l=p+1;l<=n;l++)mx=max(mx,(aa[i]&aa[j]&aa[o]&aa[p]&aa[l]));
			cout<<mx;
		}else if(m==6){
			for(int i=1;i<=n;i++)for(int j=i+1;j<=n;j++)for(int o=j+1;o<=n;o++)for(int p=o+1;p<=n;p++)for(int l=p+1;l<=n;l++)for(int u=l+1;u<=n;u++)mx=max(mx,(aa[i]&aa[j]&aa[o]&aa[p]&aa[l]&aa[u]));
			cout<<mx;
		}else if(m==7){
			for(int i=1;i<=n;i++)for(int j=i+1;j<=n;j++)for(int o=j+1;o<=n;o++)for(int p=o+1;p<=n;p++)for(int l=p+1;l<=n;l++)for(int u=l+1;u<=n;u++)for(int b=u+1;b<=n;b++)mx=max(mx,(aa[i]&aa[j]&aa[o]&aa[p]&aa[l]&aa[u]&aa[b]));
			cout<<mx;
		}else cout<<0;
	}
	return 0;
}
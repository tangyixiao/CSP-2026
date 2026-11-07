#include<bits/stdc++.h>
#define int long long
using namespace std;
char a[100005];
int x[100005],y[100005];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,t=0,mx=-1,ans=0;
	cin>>n;
	int k=n;
	for(int i=1;i<=n;i++){
		cin>>x[i]>>a[i];
		t+=x[i];
	}
	if(t%2==0){
		for(int i=1;i<=n;i++){
			y[a[i]]+=x[i];
		}
		for(int i=1;i<=n;i++){
			if(y[a[i]]>mx)mx=y[a[i]];
		}
		cout<<t-mx;
		return 0;
	}else{
		if(n==1||(n==2&&a[1]==a[2])){
			cout<<0;
			return 0;
		}
		if(n==2&&a[1]!=a[2]){
			cout<<min(x[1],x[2]);
			return 0;
		}
		int f=0;
		for(int i=2;i<=n;i++){
			if(a[i]!=a[i-1]){
				f=1;
				break;
			}
		}
		if(f==0){
			cout<<0; 
			return 0;
		}
		for(int i=1;i<=n/2;i++){
			if(x[i]==x[k]&&a[i]==a[k])continue;
			else{
				if(x[i]==x[k]){
					ans+=x[k];
					a[i]=a[k];
				}else if(a[i]==a[k]){
					ans+=max(x[i],x[k])-min(x[i],x[k]);
					if(x[i+1]>x[k-1])x[i+1]-=x[i]-x[k];
					else x[k-1]-=x[k]-x[i];
				}else{
					ans+=min(x[i],x[k]);
					if(x[i]<x[k])a[i]=a[k];
					else a[k]=a[i];
					ans+=max(x[i],x[k])-min(x[i],x[k]);
					if(x[i+1]>x[k-1])x[i+1]-=x[i]-x[k];
					else x[k-1]-=x[k]-x[i];
				}
			}
		}
		cout<<ans;
	}
	return 0;
} 

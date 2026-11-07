#include<bits/stdc++.h>
using namespace std;
int n,a[200005];
char c[200005];
long long sum=0,ans=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		sum+=a[i];
	}
	long long mid=sum/2,js=1;
	int u=1,v=n;
	char c1=c[1],c2=c[n];
	while(u<v){
		c1=c[u],c2=c[v];
		if(c1!=c2){
			if(a[u]>a[v]) ans+=a[v],a[u]-=a[v],v--;
			else if(a[u]==a[v]) ans+=a[u],u++,v--;
			else if(a[u]<a[v]) ans+=a[u],a[v]-=a[u],u++;
		}else{
			if(a[u]>a[v]) a[u]-=a[v],v--;
			else if(a[u]==a[v]) u++,v--;
			else if(a[u]<a[v]) a[v]-=a[u],u++;
		}
	}
	cout<<ans;
	return 0;
}
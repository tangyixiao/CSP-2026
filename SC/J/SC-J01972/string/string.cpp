#include<bits/stdc++.h>
using namespace std;
const int MAXN=2e5+5;
int n;
long long a[MAXN],a2[MAXN],d[MAXN],d2[MAXN];
char c[MAXN],c2[MAXN];
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		a2[n+1-i]=a[i],c2[n+1-i]=c[i];
		d[i]=d[i-1]+a[i];
	}
	for(int i=1;i<=n;i++) d2[i]=d2[i-1]+a2[i];
	long long p=0,q=0,r=0,ans=0,mid=d[n]/2;//p表示 a 的所在块，q表示a2的所在块 
	while(r<mid){
		if(r==d[p]) p++;
		if(r==d2[q]) q++;//r走到了d2[q]的尽头，开启下一块 
		if(d[p]>r&&d[p]>=d2[q]){//修改块小于匹配块 
			if(c[p]!=c2[q]) ans+=min(d2[q],mid)-r;
			r=min(d2[q],mid);
		}
		if(d[p]>r&&d[p]<d2[q]){//修改块大于匹配块 
			if(c[p]!=c2[q]) ans+=min(d[p],mid)-r;
			r=min(d[p],mid);
		} 
	}
	cout<<ans;
	return 0;
}
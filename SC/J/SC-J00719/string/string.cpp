#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,cnt,a[200005],ans;
char b[200005];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	int x=0,y=0;
	for(int i=1;i<=(n+1)/2+max(-x,y);i++){
		if(a[i-y]!=a[n+1-i-x]){
			if(b[i-y]==b[n+1-i-x]){
				if(a[i-y]>a[n+1-i-x]){
					a[i-y+1]+=a[i-y]-a[n+1-i-x];
					ans+=a[i-y]-a[n+1-i-x];
					a[i-y]=a[n+1-i-x];
				}else{
					a[n+1-i-x-1]+=a[n+1-i-x]-a[i-y];
					ans+=a[n+1-i-x]-a[i-y];
					a[n+1-i-x]=a[i-y];
				}
			}else{
				if(a[i-y]>a[n+1-i-x]){
					ans+=a[n+1-i-x];
					a[i-y]-=a[n+1-i-x];
					y++;
				}else{
					ans+=a[i-y];
					a[n+1-i-x]-=a[i-y];
					x--;
				}
			}
		}else if(a[i-y]==a[n+1-i-x]&&b[i-y]!=b[n+1-i-x]){
			ans+=a[i-y];
			b[i-y]=b[n+1-i-x];
		}
	}
	cout<<ans;
	return 0;
}
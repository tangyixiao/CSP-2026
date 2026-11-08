#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll n,a[200005],x,y,ans;
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>c[i];
	x=1;
	y=n;
	while(x!=y){
		if(c[x]==c[y]){
			if(a[x]<a[y]){
				a[y]-=a[x];
				x++;
				if(x==y) break;
			}
			else if(x==y){
				x++;
				if(x==y) break;
				y--;
				if(x==y) break;
			}
			else{
				a[x]-=a[y];
				y--;
				if(x==y) break;
			}
		}
		else{
			if(a[x]<a[y]){
				ans+=a[x];
				a[y]-=a[x];
				x++;
				if(x==y) break;
			}
			else if(x==y){
				ans+=a[y];
				x++;
				if(x==y) break;
				y--;
				if(x==y) break;
			}
			else{
				ans+=a[y];
				a[x]-=a[y];
				y--;
				if(x==y) break;
			}
		}
	}
	cout<<ans;
	return 0;
}

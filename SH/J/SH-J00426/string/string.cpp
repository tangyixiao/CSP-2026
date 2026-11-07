#include<bits\stdc++.h>
using namespace std;
#define int long long
int n,x=0,y=0,l=1,r=0,summ=0,ans=0;
char s;
int a[200005];
char b[200005];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	r=n;
	for (int i=1;i<=n;i++) cin>>a[i]>>b[i],summ=(summ+a[i])%2;
	while (l<=r){
		if (x==y){
			if (b[l]!=b[r]){
				ans+=min(a[l],a[r]);
			}
			else s=b[l],x=0,y=0;
			if(a[l]>a[r]) s=b[l],x=a[l]-a[r],y=0;
			else if (a[l]<a[r]) s=b[r],y=a[r]-a[l],x=0;
			l++;
			r--;
		}
		else if (x>y){
			if (s!=b[r]){
				if (x<y+a[r]) ans+=x;
				else ans+=a[r];
				if (x<y+a[r]) s=b[r],y=y+a[r]-x,x=0;
				else x-=a[r];
			}
			else{
				if (x<y+a[r]) s=b[r],y=y+a[r]-x,x=0;
				else x-=a[r];
			}
			
			r--;
		}
		else if (x<y){
			if (s!=b[l]){
				if (x+a[l]>y) ans+=y;
				else ans+=a[l];
				if (x+a[l]>y) s=b[l],x=x+a[l]-y,y=0;
				else y-=a[l];
			}
			else{
				if (x+a[l]>y) s=b[l],x=x+a[l]-y,y=0;
				else y-=a[l];
			}
			l++;
		}
	}
	cout<<ans;
	return 0;
} 

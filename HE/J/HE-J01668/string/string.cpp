#include<bits/stdc++.h>
#define int long long
using namespace std;
int const N=2e5+5;
int a[N],n,sum;
int x,y,b=1,d,sx,sy,qwq=0,ans;
char c[N];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	d=n;
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
		cin>>c[i];
		sum+=a[i];
	}
	for(int i=1;i<=n;i++){
		x+=a[i];
		int f=0;
		if(x>sum/2){
			x-=a[i];
			a[i]=sum/2-x;
			f=1;
		} 
		if(x==sum/2){
			f=1;
		}
		y=0;
		while(y<a[i]){
			y+=a[d];
			if(y>a[i]){
				y-=a[d];
				a[d]-=a[i]-y;
				if(c[d]!=c[i]){
					ans+=a[i]-y; 
				}
				break;
			}
			if(c[d]!=c[i]){
				ans+=a[d]; 
			}
			d--;
		}
		if(f) break;
	}
	cout<<ans;
	return 0;
}

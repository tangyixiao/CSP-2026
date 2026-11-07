#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+10;
int n,a[N],ans;
char c[N];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	int l=1,r=n,z=a[l],y=a[n];
	while(l<r){
		if(z==y){
			if(c[l]!=c[r]){
				ans+=z;
			}
			l++;
			r--;
			z=a[l];
			y=a[r];
		}
		else{
			if(z<y){
				int tmp=y-z;
				char s=c[r];
				if(c[l]!=s){
					ans+=z;
				}
				l++;
				while(tmp-a[l]>=0&&l<r){
					if(c[l]!=s){
						ans+=a[l];
					}
					tmp-=a[l];
					l++;
				}
				if(c[l]!=s&&l<r){
					ans+=tmp;
				}
				r--;
				z=a[l]-tmp;
				y=a[r];
			}
			else{
				int tmp=z-y;
				char s=c[l];
				if(c[r]!=s){
					ans+=y;
				}
				r--;
				while(tmp-a[r]>=0&&l<r){
					if(c[r]!=s){
						ans+=a[r];
					}
					tmp-=a[r];
					r--;
				}
				if(c[r]!=s&&l<r){
					ans+=tmp;
				}
				l++;
				y=a[r]-tmp;
				z=a[l];
			}
		}
	}
	cout<<ans;
	return 0;
}
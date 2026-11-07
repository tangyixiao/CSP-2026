#include<bits/stdc++.h>
#define LL long long
#define ULL unsigned long long
#define re register
#define ss stable_sort

using namespace std;

const ULL N = 2e5+5;

int n,a[N];
char c[N];
string s;
LL ans;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);

	cin>>n;
	for(re int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		for(re int j=1;j<=a[i];j++){
			s+=c[i];
		}
	}
	
	int g=0;
	for(re int i=1;i<=n;i++){
		int l=i,r=n-i+1;
		if(l>=r) break;
		if(c[l]==c[r]){
			if(a[l]!=a[r]){
	    		g=abs(a[l]-a[r]);
	   			if(a[l]>a[r]){
					a[r-1]-=g;
					a[r]+=g;
	    			if(c[r-1]==c[l]) continue;
				}
				else{
					a[l+1]-=g;
					a[l]+=g;
					if(c[l+1]==c[r]) continue;
				}
				ans+=g;
			}
		}
		else{
			if(a[l]==a[r]){
				c[l]=c[r];
				ans+=a[l];
			}
			if(a[l]!=a[r]){
	    		g=abs(a[l]-a[r]);
	   			if(a[l]>a[r]){
					a[r-1]-=g;
					a[r]+=g;
	    			if(c[r-1]==c[l]) ans+=a[r];
	    			else ans+=a[r];
	    			c[r]=c[l];
				}
				else{
					a[l+1]-=g;
					a[l]+=g;
					if(c[l+1]==c[r]) ans+=a[l];
					else ans+=a[r];
					c[l]=c[r];
				}
			}
		}
	}
	return 0;
}
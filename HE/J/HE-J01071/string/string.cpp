#include<bits/stdc++.h>
using namespace std;
long long n,a[200000],g=-1,l,la,r,kb,ans;
char c[200000],lc;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>la>>lc;
		if(i&&lc==c[g])a[g]+=la;
		else{
			g++;
			a[g]=la;
			c[g]=lc;
		}
	}
	l=0;
	r=g;
	while(r-l>1){
		if(a[l]==a[r]){
			if(c[l]!=c[r])ans+=a[l];
			l++;
			r--;
		}
		else{
			if(a[l]<a[r]){
				if(c[l]!=c[r])ans+=a[l];
				long long k=a[r]-a[l];
				for(int i=1;r>l&&k;i++){
					if(c[l+i]!=c[l]){
						if(a[l+i]>=k){
							a[l+i]-=k;
							ans+=k;
							l+=i;
							break;
						}
						k-=a[l+i];
					}
					else k-=a[l+i];
				}
			}
			else{
				if(c[l]!=c[r])ans+=a[r];
				long long k=a[l]-a[r];
				for(int i=1;r>l&&k;i++){
					if(c[r-i]!=c[r]){
						if(a[r-i]>=k){
							a[r-i]-=k;
							ans+=k;
							r-=i;
							k=0;
							break;
						}
						else{
							k-=a[r-i];
							ans+=a[r-i];
						}
					}
					else k-=a[r-i];
				}
			}
		}
	}
	cout<<ans;
	return 0;
}

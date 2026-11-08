#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[5000005],ans,z[5000005],cnt=1,l,r,d,mx;
char x[5000005],s[5000005],ss;
signed  main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>x[i];
	}
	if(n==1)cout<<0;
	else if(n==2&&x[1]!=x[2])cout<<min(a[1],a[2]);
	else{
		l=1,r=n;
		while(l<=r){
			if(x[l]!=x[r]){
				int p;
				if(a[l]>a[r])p=l;
				else p=r;
				if(ss==x[p]){
					a[p]-=d;
					ss=' ';
					d=0;
				}
				else {
					ans+=d;
					a[p]-=d;
					ss=' ';
					d=0;
				}
				if(a[l]==a[r])ans+=a[l];
				else if(a[l]>a[r]){
					ans+=a[r];
					d=a[l]-a[r];
					ss=x[l];
				}
				else if(a[r]>a[l]){
					ans+=a[l];
					d=a[r]-a[l];
					ss=x[r];
				}
			}
			else{
				if(a[l]!=a[r]&&x[l+1]!=x[l]){
					d=abs(a[r]-a[l]);
					ss=x[r];
				}
			}
			l++,r--;
		}
		cout<<ans+d;
	}
	
	return 0;
} 

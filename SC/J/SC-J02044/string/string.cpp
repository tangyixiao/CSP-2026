#include<bits/stdc++.h>
using namespace std;
int n;
long long a[200010];
long long qian[200020];
char c[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	int siz=0;
	for(int i=1;i<=n;i++){
		long long t;
		cin>>t;
		char cc;
		cin>>cc;
		if(cc==c[siz]){
			a[siz]+=t;
		}
		else{
			c[++siz]=cc;
			a[siz]=t;
		}
		qian[siz]=qian[siz-1]+a[siz];
	}
	n=siz;
	long long tt=n;
	long long ans=0;
	for(int i=1;i<=n;i++){
		long long sh=a[i];
		for(int j=tt;;j--){
			if(c[i]!=c[j]){
				if(sh>a[j]){
					ans+=a[j];
					sh-=a[j];
				}else if(sh==a[j]){
					ans+=a[j];
					tt=j-1;
					break;
				}else{
					ans+=sh;
					a[j]-=sh;
					tt=j;
					break;
				}
			}else{
				if(sh>a[j]){
					sh-=a[j];
				}else if(sh==a[j]){
					tt=j-1;
					break;
				}else{
					a[j]-=sh;
					tt=j;
					break;
				}
			}
		}
		if(qian[i]>=qian[n]/2)break;
	}
	cout<<ans;
	return 0;
}
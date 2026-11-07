#include<bits/stdc++.h>
using namespace std;
int n,a[200005];
long long len,ans;
char c[200005];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		len+=a[i];
	}
	int i=1,j=n,l=a[1],r=a[n];
	char lc=c[1],rc=c[n];
	long long ls=a[1],rs=a[n];
	while(i<j){
		if(lc==rc){
			if(l>r){
				l-=r,j--,rs+=a[j],r=a[j],rc=c[j];
			}else if(r>l){
				r-=l,i++,ls+=a[i],l=a[i],lc=c[i];
			}else{
				j--,r=a[j],rc=c[j];
				i++,l=a[i],lc=c[i];
				ls+=a[i],rs+=a[j];
			}
		}else{
			if(l>r){
				ans+=r;
				l-=r,j--,rs+=a[j],r=a[j],rc=c[j];
			}else if(r>l){
				ans+=l;
				r-=l,i++,ls+=a[i],l=a[i],lc=c[i];
			}else{
				ans+=l;
				j--,r=a[j],rc=c[j];
				i++,l=a[i],lc=c[i];
				ls+=a[i],rs+=a[j];
			}
		}
	}
	cout<<ans;
	return 0;
}

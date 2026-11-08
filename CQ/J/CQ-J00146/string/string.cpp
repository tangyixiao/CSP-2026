#include<bits/stdc++.h>
using namespace std;
long long n,a[200001],si,sj,ans;
char c[200001];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;++i)
		cin>>a[i]>>c[i];
	for(int i=0,j=n+1;i<j;){
		if(si>sj){
			if(c[i]!=c[j])
				ans+=a[i]-(si-sj);
			a[i]-=a[i]-(si-sj);
			sj+=a[--j]; 
		}
		else if(si==sj){
			if(c[i]!=c[j])
				ans+=min(a[i],a[j]);
			si+=a[++i],sj+=a[--j];
		}
		else{
			if(c[i]!=c[j])
				ans+=a[j]-(sj-si);
			a[j]-=a[j]-(sj-si);
			si+=a[++i];
		}
		//cout<<ans<<' '<<si<<' '<<sj<<'\n';
	}
	cout<<ans;
	return 0;
}

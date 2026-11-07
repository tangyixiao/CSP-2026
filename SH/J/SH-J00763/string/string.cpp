#include<bits/stdc++.h>
using namespace std;
long long n,a[200005],b[200005],ans;
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>c[i];
	for(int i=n;i>=1;i--) b[i]=b[i+1]+a[i];
	for(int i=1;i<=n;i++) a[i]+=a[i-1];
	long long pa=1,pb=n,lst=0;
	while(pa<pb){
		if(c[pa]!=c[pb]) ans+=min(a[pa],b[pb])-lst;
		if(a[pa]>b[pb]) pb--;
		else if(a[pa]<b[pb]) pa++;
		else{
			pa++;
			pb--;
		}
		lst=max(a[pa-1],b[pb+1]);
	}
	cout<<ans;
	return 0;
} 

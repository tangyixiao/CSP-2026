#include<bits/stdc++.h>
using namespace std;
long long n;
long long a[200005];
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	long long ans=0;
	for(int ii=1,jj=n; ; ){
		if(a[ii]==0){
			ii++;
		}
		if(a[jj]==0){
			jj--;
		}
		if(ii==jj || ii>jj){
			break;
		}
		int x=min(a[ii],a[jj]);
		a[ii]-=x;
		a[jj]-=x;
		if(c[ii]!=c[jj]){
			ans+=x;
		}
	}
	cout<<ans;
	fclose(stdin);
	return 0;
}
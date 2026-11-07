#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+10;
int n,a[N],i_,now=0,ans=0;
char c[N];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i];
		i_+=a[i];
	}
	int l=0,r=i_+1;
	for(int i=0,j=n-1;l<r&&i<j;){
		l+=min(a[i],a[j]);
		r-=min(a[i],a[j]);
		if(c[i]!=c[j]){
			ans+=min(a[i],a[j]);
		}
		int n1=a[i],n2=a[j];
		a[i]-=min(n1,n2);
		a[j]-=min(n1,n2);
		if(a[i]==0)i++;
		if(a[j]==0)j--;
	}
	cout<<ans;
	/*ßÉßÉßÉ*/ 
	return 0;
}

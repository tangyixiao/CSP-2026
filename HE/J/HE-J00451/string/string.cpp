#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[200006],b[200006],l,ans;
char c[200006],d[200006];
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i-1];l+=a[i];
		b[n-i+1]=a[i];
		d[n-i]=c[i-1];
	}
	if(l<=100000000){
		string s;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=a[i];j++){
				s+=c[i-1];
			}
		}
		for(int i=1;i<=l/2;i++){
			if(s[i]!=s[l-1+i]){
				ans++;
			}
		}
		cout<<ans<<'\n';
		return 0;
	}
	for(int i=1;i<=n;i++){
		a[i]+=a[i-1];
		b[i]+=b[i-1];
	}
	int sum=0,j=0;
	for(int i=0;i<n;i++){
		if(a[i]+1>=l/2)break;
		if(a[i+1]>=l/2){
			while(b[j]+1<=l/2){
				if(d[j]!=c[i]){
					int lt=max(b[j]+1,a[i]+1),r=min(b[j+1],l/2);
					ans+=r-lt+1;
				}
				j++;
			}
		}
		while(b[j]+1<=a[i+1]){
			if(d[j]!=c[i]){
				int lt=max(b[j]+1,a[i]+1),r=min(b[j+1],a[i+1]);
				ans+=r-lt+1;
			}
			j++;
		}
	}
	if(l%2){
		int x=l/2+1,d1=0,d2=0;
		for(int i=1;i<=n;i++){
			if(a[i]+1<=x&&a[i+1]>=x){
				d1=i;
				break;
			}
		}
		for(int i=1;i<=n;i++){
			if(b[i]+1<=x&&b[i+1]>=x){
				d2=i;
				break;
			}
		}
		ans+=(c[d1]!=d[d2]);
	}
	cout<<ans<<'\n';
	return 0;
}

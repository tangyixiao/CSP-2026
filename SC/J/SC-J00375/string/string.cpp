#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,ans;
int a[200005];
char c[200005];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
		scanf("%lld %c",&a[i],&c[i]);
	for(int i=1,j=n;i<j;){
		if(a[i]==a[j]){
			if(c[i]!=c[j])
				ans+=a[i];
			i++,j--;
			continue;
		}
		if(a[i]<a[j]){
			if(c[i]!=c[j])
				ans+=a[i];
			a[j]-=a[i];
			i++;
			continue;
		}
		else{
			if(c[i]!=c[j])
				ans+=a[j];
			a[i]-=a[j];
			j--;
			continue;
		}
	}
	cout<<ans;
	return 0;
}
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N=2e5+5,M=2e15+5;
ll n,a[N],ans,mi=M;
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i]>>c[i];
	ans=0;
	ll i=1,j=n;
	while(i<j){
		ll ni=M;
		ni=min(a[i],a[j]);
		if(c[i]!=c[j])
			ans+=ni;
		if(a[i]>a[j]){a[i]-=a[j],j--;}
		else if(a[i]<a[j]){a[j]-=a[i],i++;}
		else if(a[i]==a[j]){i++,j--;};
	}
	cout<<ans;
	return 0;
}
#include<bits/stdc++.h>
using namespace std; 
long long n,sum=0,l=0,ans=0,ll=0;
long long a[200005],jl[100],b[1000000];
char x[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n;
	for(long long i=0;i<n;i++){
		cin>>a[i]>>x[i];
		if(a[i]==1) l++;
		jl[(x[i]-'a')]+=a[i];
		jl[(x[i]-'a')]%=2;
		ll+=a[i];
	}
	if(n==1){
		cout<<0<<endl;
		return 0;
	}else if(n==2){
		if(x[0]==x[1]) cout<<0<<endl;
		else cout<<min(a[0],a[1])<<endl;
		return 0;
	}
	if(l==n){
		for(long long i=0;i<26;i++) ans+=jl[i];
		if(ll%2==0) cout<<ans<<endl;
		else cout<<ans-1<<endl;
		return 0;
	}
	cout<<0<<endl;
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,s[200005];
char a[200005];
ll ans;
ll j,k=1;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	for(ll i=1;i<=n;i++){
		cin>>s[i]>>a[i];
	}
	j=n;
	ll mid=n/2;
	if(n%2!=0)
		mid+=1;
	while(1){
		if(k==mid)
			break;
		if(a[k]!=a[j]){
			if(s[k]>=s[j]){
				ans+=s[j];
				s[k]-=s[j];
				j-=1;
			}
			else{
				ans+=s[k];
				s[j]-=s[k];
				k+=1;
			}
		}
		else{
			ll ma=min(s[k],s[j]);
			s[k]-=ma;
			s[j]-=ma;
			if(s[k]==0)
				k++;
			if(s[j]==0)
				j--;
		}
		if(k==j)
			break;
	}
	cout<<ans;
	return 0;
}

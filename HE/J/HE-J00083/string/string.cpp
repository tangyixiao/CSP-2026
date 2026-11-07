#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N=2e5+10;

ll n,a[N],ans;
char op[N];

int main(){
	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>op[i];
	
	ll r=n;
	for(int i=1;i<=n;i++){
		
		if(i==r) break;
		
		if(a[i]<a[r]){
			
			if(op[i]!=op[r]) ans+=a[i];
			a[r]-=a[i];
		}
		else{
			
			if(op[i]!=op[r]) ans+=a[r];
			a[i]-=a[r],r--,i--;
		}
	}
	
	cout<<ans<<'\n';
	
	return 0;
}

/*
8:55 meow!
*/

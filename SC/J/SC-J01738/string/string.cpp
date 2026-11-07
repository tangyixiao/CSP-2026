#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N=5e5+5;

struct st{
	ll k;
	char c;
}a[N];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i].k>>a[i].c;
	int j=n;
	ll suml=a[1].k,sumr=a[n].k;
	ll ans=0;
	int l=1,r=n;
	while(l<r){
		if(a[l].c!=a[r].c){
			ll lll=max(suml-a[l].k,sumr-a[r].k);
			ll rrr=min(suml,sumr);
			ans+=rrr-lll;
		}
		if(suml<sumr){
			l++;
			suml+=a[l].k;
		}
		else if(suml>sumr){
			r--;
			sumr+=a[r].k;
		}
		else{
			l++;
			r--;
			suml+=a[l].k;
			sumr+=a[r].k;
		}
	}
	cout<<ans;
	return 0;
}
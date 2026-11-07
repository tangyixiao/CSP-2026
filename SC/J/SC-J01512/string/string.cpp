#include<bits/stdc++.h>
#define int long long
#define INF 0x3f3f3f3f
#define fi first
#define se second
using namespace std;
const int N=2e5+10;
int n,a[N];
char c[N];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++){
    	cin>>a[i]>>c[i];
	}
	int i=1,j=n,ans=0;
	while(i<=j){
		int z=min(a[i],a[j]);
		if(c[i]!=c[j]){
			ans+=z;
		}
		a[i]-=z,a[j]-=z;
		if(!a[i]) i++;
		else j--;
	}
	cout<<ans;
	return 0;
}
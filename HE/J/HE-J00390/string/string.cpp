#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m=0,sum=1,a[10000005],nm=1,ans=0,sh=0;
string c[100005];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		m+=a[i];
		if(c[i]==c[i-1]){
			sum++;
		}
		if(a[i]==a[i-1]){
			nm++;
		}
	}
	if(sum==n){
		cout<<0;
		return 0;
	}
	int k=0;
	if(nm==n){
		for(int i=n;i>n/2;i--){
			k++;
			if(c[i]!=c[k]){
				ans+=a[i];
			}
		}
		cout<<ans;
		return 0;
	}
	int x=n;
	for(int i=1;i<=n;i++){
		if(a[x]==0){
				x--;
		}
		for(int j=1;j<=a[i];j++){
			if(a[x]==0){
				x--;
			}
			if(c[x]!=c[i]){
				ans++;
			}
			sh++;
			a[x]--;
			if(sh==m/2){
				cout<<ans;
				return 0;
			}
		}
	}
	return 0;
}

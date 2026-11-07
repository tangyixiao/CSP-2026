#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=2e5+10; 
int n,a[N],cnt,ans;
char c[N];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n;
	cnt=n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	for(int i=1;i<=(cnt-1);i++){
		while(a[i]>0){
			if(a[i]>=a[cnt]){
				if(c[i]!=c[cnt]){
					ans+=(a[cnt]);
				}
				a[i]-=a[cnt];
				a[cnt]=0;
				cnt--;
			}
			if(a[cnt]>=a[i]){
				if(c[i]!=c[cnt]){
					ans+=(a[i]);
				}
				a[cnt]-=a[i];
				a[i]=0;
			}
		}
	}
	cout<<ans;
	return 0;
} 
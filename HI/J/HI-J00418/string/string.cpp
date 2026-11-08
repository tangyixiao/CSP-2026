#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+10;
int a[N];
char c[N];
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false),cin.tie(0);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>c[i];
	int sum=0; 
	for(int i=1;i<=n;i++){
		while(a[i]>=a[n] && i!=n){
			if(c[i] != c[n]){
				sum += a[n];
				a[i] -= a[n];
			}else{
				a[i] -= a[n];
			}
			n--;
		}
		if(a[i] != 0 && i!=n){
			if(c[i] != c[n]){
				sum += a[i];
				a[n] -= a[i];
			}else{
				a[n] -= a[i];
			}
		}
	}
	cout<<sum;
	
	return 0;
}

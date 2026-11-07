#include<bits/stdc++.h> 
#define int long long
using namespace std;
const int N=1e6;
int a[N];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,x;
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	if(m==1){
		sort(a+1,a+n+1);
		cout<<a[n];
	}
	if(m==2){
		int max=-1;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				x=a[i]&a[j];
				if(x>max)max=x;
			}
		}
		cout<<max;
	}
	else {
		sort(a+1,a+n+1);
		int q=m-1,i=n-1,ans=a[n];
		while(q--){
			ans&=a[i];
			i--;
		}
		cout<<ans;
	}
	return 0;
}

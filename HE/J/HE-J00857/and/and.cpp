#include<bits/stdc++.h>
#define int long long
const int N=2e5+5;
using namespace std;

int n,m;
int a[N];
int ma=INT_MIN,ans;
signed main(){
    freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	if(m==1){
		sort(a+1,a+1+n);
		cout<<a[n];
		return 0;
	}	
	else if(m==n){
		for(int i=1;i<=n;i++){
			if(i==1){
				ans=a[i];
			}
			else{
				ans=ans&a[i];
			}
		}
		cout<<ans;
		return 0;
	}
	for(int i=1;i<=n-m;i++){
		for(int j=i;j<=m+i;j++){
			if(j==i){
				ans=a[j];
			}
			else{
				ans=ans&a[j];
			}
		}
		ma=max(ma,ans);
		ans=0;
	} 
	cout<<ma;
	return 0;
}

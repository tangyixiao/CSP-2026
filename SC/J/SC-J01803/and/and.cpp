#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,m,tot,x,y,z,cnt,mid,mxt,mnt,ans;
int a[200005];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	if(m==2){
		ans=0;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans,(ll)a[i]&a[j]);
			}
		}
		cout<<ans;
	}
	else if(m==1){
		cout<<a[n];
	}
	else{
		ans=a[n];
		for(int i=n-1;i>n-m;i--){
			ans&=a[i];
		}
		cout<<ans;
	}
	return 0;
} 
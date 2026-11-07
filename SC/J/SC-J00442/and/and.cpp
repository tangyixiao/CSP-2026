#include<bits/stdc++.h>
using namespace std;
int m,n,ans=-1,tans=-1;
long long a[200005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		cout<<0;
		return 0;
	}
	else{
		if(m==2){
			for(int i=1;i<=n;i++){
				for(int j=i+1;j<=n;j++){
					tans=a[i]&a[j];
					ans=max(ans,tans);
				}
			}
			cout<<ans;
			return 0;
		}
		else{
			sort(a+1,a+1+n);
			for(int i=n;i>=1;i--){
				if(m==0)break;
				ans=a[i];
				m--;
			}
			cout<<ans;
			return 0;
		}
	}
	return 0;
}
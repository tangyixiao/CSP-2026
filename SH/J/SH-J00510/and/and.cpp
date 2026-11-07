#include <bits/stdc++.h>
using namespace std;

int n,m,a[200005],x,ans=0;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++) cin>>a[i];
	if(m==2)
		for(int i=0;i<n;i++){
			x=a[i];
			for(int j=1;j<n;j++){
				x=x&a[i+j];
				ans=max(ans,x);
			}
		}
	else if(m==1)
		for(int i=0;i<n;i++)
			ans=max(ans,a[i]);
	cout<<ans;
	return 0;
}

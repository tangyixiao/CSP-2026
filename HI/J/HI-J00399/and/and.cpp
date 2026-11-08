#include<bits/stdc++.h>
using namespace std;

int a[2000005];

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,ans=0;
	cin>>n,m;
	for(int i=1;i<=n;i++)cin>>a[i];
	if(m==0){
		for(int i=1;i<=n;i++){
			ans=max(a[i],ans);
		}
	}
	
	
	cout<<ans;
	return 0;
}


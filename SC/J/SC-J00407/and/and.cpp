#include<bits/stdc++.h>
using namespace std;
long long n,m,a[20005],ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	cin>>a[1];
	ans=a[1];
	for(int i=2;i<=n;i++){
		cin>>a[i];
		ans=ans&a[i];
	}
	sort(a+1,a+1+n);
	if(m==1)
		cout<<a[n];
	else if(m==n){
		cout<<ans;
	}
	else if(m==2){
		ans=0;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(a[i]&a[j],ans);
			}	
		}
		cout<<ans;
	}
	else cout<<a[n-1];
	return 0;
}
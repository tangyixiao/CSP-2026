#include<bits/stdc++.h>
using namespace std;
long long a[10001];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,ma=0,cnt=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cnt=a[i]|a[i+m];
			
		}
		ma=max(ma,cnt);
	}
	for(int i=1;i<=n;i++){
		ma=max(ma|a[i],ma); 
	}
	cout<<ma;
	return 0;
}

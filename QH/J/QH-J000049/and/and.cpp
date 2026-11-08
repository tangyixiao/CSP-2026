#include<bits/stdc++.h>
using namespace std;
long long n,m,ma=INT_MIN,ma1;
long long a[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n,greater<int>());
	for(int i=1;i<=n;i++){
		ma1=a[i];
		for(int j=i+1;j<=m;j++){
			ma1=ma1&a[j];
		}
		ma=max(ma,ma1);
	}
	cout<<ma;
	return 0;
}

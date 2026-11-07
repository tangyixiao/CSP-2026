#include<bits/stdc++.h>
using namespace std;
int a[200010],m;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int n;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	int cnt=0;
	int k=a[n];
	for(int i=n;i>=n-m+1;i--){
		cnt++;
		k=(k&a[i]);
	}
	cout<<k;
	return 0;
}

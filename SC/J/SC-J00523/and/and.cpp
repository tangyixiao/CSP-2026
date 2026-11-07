#include<bits/stdc++.h>
const int N=2e5+10;
using namespace std;
long long n,m,a[N],cnt;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	cnt=a[n];
	for(int i=n;i>=n-m+1;i--){
		cnt=cnt&a[i];
	}
	cout<<cnt;
	return 0;
}
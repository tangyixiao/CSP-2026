#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,m,a[N]={},sum=0;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	for(int i=n;i>n-m+1;i--){
		a[i-1]=max(a[i],a[i-1])-(a[i]^a[i-1]);
		a[i-1]=abs(a[i-1]); 
	}
	cout<<a[n-m];
	return 0;
}
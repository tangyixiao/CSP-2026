#include<bits/stdc++.h> 
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,ans=1,c;
	cin>>n>>m;
	int a[n],b[m];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	for(int i=n;i>=m;i--){
		b[ans]=a[i];
		ans++;
	}
	c=b[1];
	for(int i=2;i<=m;i++){
		c=c&b[i];
	}
	cout<<c;
	return 0;
}
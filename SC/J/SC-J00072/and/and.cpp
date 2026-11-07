#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,h=0,c=INT_MAX;
	cin>>n>>m;
	int a[n+5];
	for(int i=1;i<=n;i++){
		cin>>a[i];
		h+=a[i];
	}
	h/=n;
	for(int i=1;i<=n;i++){
		if(abs(a[i]-h)<=c)c=a[i];
	}
	cout<<c;
	return 0;
}
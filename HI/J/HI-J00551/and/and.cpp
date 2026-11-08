#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin)
	freopen("and.out","w",stduot)
	int n,m,a[100005];
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a,a+4);
	if(n%2==0)
		n/=2;
	else{
		n++;
		n/=2;
	}
	cout<<a[n];
	return 0;
}

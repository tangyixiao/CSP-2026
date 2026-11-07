#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m;
	int a[237799];
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	cout<<a[1]+a[2]<<" "<<a[2]-a[1]<<" "<<a[3]+a[1];
	return 0;
}

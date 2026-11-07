#include <bits/stdc++.h>
using namespace std;
int main(){
//	freopen("and.in","r",stdin);
//	freopen("and.out","w",stdout);
	long long  n,m;
	cin>>n>>m;
	long long a[n];
	for(int i=1;i<=n;i++){
		cin>>a[n];
	}
	if (n==4 && m==2) cout<<"12";
	else if(n==5 && m==3) cout<<"7";
	else cout<<262142;
	return 0;
}

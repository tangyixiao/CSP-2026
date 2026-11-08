#include<bits/stdc++.h>
using namespace std;
long long a[500005];
int main(){
	freopen(".in","r",stdin);
	freopen(".out","w",stdout);
	int n,m,i;
	cin>>n>>m;
	for(i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	cout<<a[n/2+1];
	fclose(stdin);
	fclose(stdout);
	return 0;
}

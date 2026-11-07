#include<bits/stdc++.h>
using namespace std;
long long a[200005],dp[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	long long n,m,max1=-100;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		max1=max(max1,a[i]);
	}
	cout<<max1;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
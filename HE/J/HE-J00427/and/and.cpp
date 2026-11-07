#include<bits/stdc++.h>
using namespace std;
int a[11000];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,sum,ans=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		ans++;
		sum=ans*a[i];
	}
	cout<<sum;
	fclose(stdin);
	fclose(stdout);
	return 0;
}

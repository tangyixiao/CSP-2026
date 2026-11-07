#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int a[300000];
	int m,n,ans;
	cin>>m>>n;
	for(int i=0;i<m;i++){
		cin>>a[i];
	}
	sort(a,a+m);
	ans=a[m-n];
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}

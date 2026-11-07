#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200002],max1,q;
int main(){
	//Trick||Treat!
//	freopen("and.in","r",stdin);
//	freopen("and.out","w",stdout);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]>max1)
		max1=a[i];
	}
	sort(a+1,a+n+1);
	for(int i=2;i<=m;i++){
		max1=a[n-i+1]&max1;
	}
	cout<<max1;
	fclose(stdin);
	fclose(stdout);

	return 0;
}


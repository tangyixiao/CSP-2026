#include<bits/stdc++.h> 
using namespace std;
long long n,m,a[200005],x;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		x=max(x,a[i]);
	}
	//cout<<x;
	sort(a+1,a+n+1);
	cout<<a[n-m+1];
	return 0;
}
/*/
4 2
3 15 12 12

5 3
31 3 1 15 7
/*/

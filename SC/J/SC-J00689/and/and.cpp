// Sat 26/10/31 11:22 By lyc122@CSP-J/T3
#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[100001];


int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int temp;
		cin>>temp;
		a[i] = temp;
	}
	sort(a+1,a+1+n);
	cout<<a[n];
}

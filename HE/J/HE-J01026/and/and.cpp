#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,e,f=1;
	cin>>n>>m;
	long long a[200005];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1,greater<int>());
	e=a[f];
	f++;
	for(int i=1;i<=n;i++){
		e=e^a[f];
		f++;
	}	
	cout<<e;
	return 0;
}

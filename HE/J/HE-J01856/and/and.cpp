#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,mx=0,a[200005],p;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++){
		if(n%2==0){
			p=a[n/2];
		}
		else p=a[n/2+1];
	}
	cout<<p;
	return 0;
}

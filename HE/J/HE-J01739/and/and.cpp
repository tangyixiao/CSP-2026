#include<bits/stdc++.h>
using namespace std;
int a[100];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		int s=max(a[i+2],min(a[i],a[i+1]));
		cout<<s;
		break;
	}
	return 0;
}

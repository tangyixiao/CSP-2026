#include<bits/stdc++.h>
using namespace std;
int n,a[200050];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=n;i>=1;i++){
	  a[i]%=2;
    return a[i];
	  a[i]/=2;
	cout<<a[i];
	}
	for(int i=1;i<=n;i++){
		
	}
	return 0;
}

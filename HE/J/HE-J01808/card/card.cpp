#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen(" string.in","r",stdin);
	freopen(" string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,x=0,y=0;
	cin>>n;
	int a[n];
	for(int i=0;i<=n;i++){
		cin>>a[x];
		cin>>a[y];
		if(a[y]==a[y]){
			cout<<"0";
			break;
		}else{
			cout<<n/2*a[y];
		}
	}

	return 0;
}

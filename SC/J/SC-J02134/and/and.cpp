#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],Max;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	cin>>a[1];
	Max=a[1];
	for(int i=2;i<=n;i++){
		cin>>a[i];
		Max=Max&a[i];
	}
	if(m==n){
		cout<<Max;
	}else{
		cout<<1;
	}
	return 0;
}
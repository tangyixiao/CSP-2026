#include<bits/stdc++.h>
using namespace std;
int n,m,a,maxx=INT_MIN;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a;
		maxx=max(a,maxx);
	}
	cout<<maxx;
	return 0;
}

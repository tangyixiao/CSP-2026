#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m,maxx=-1;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		if(a>maxx){
			maxx=a;
		}
	}
	cout<<maxx;
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int a[1000];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int maxx=-1;
	int cnt=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(n>=0){
			if(m=maxx){
				maxx=max(m,n);
			}
		}
		
	}
	cout<<maxx;
	return 0;
}

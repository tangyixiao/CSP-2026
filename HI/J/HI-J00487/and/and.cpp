#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,a,maxx=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a;
		if(maxx<a){
			maxx=a;
		}
	}
	cout<<maxx;
	return 0; 
}

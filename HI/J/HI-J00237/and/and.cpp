#include<bits/stdc++.h>
using namespace std;
int s[10005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,maxx=-1;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>s[i];
		for(int j=i-1;j>=1;j--){
			maxx=max(s[i]&s[j],maxx);
		}
	}
	cout<<maxx;
	return 0;
}

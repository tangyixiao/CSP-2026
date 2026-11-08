#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,maxx = 0;
	cin>>n>>m;
	int s[200005];
	for(int i = 1;i<=n;i++ ){
		cin>>s[i];
	}
	for(int i = 1;i<=n;i++){
		for(int j = i+1;j<=n;j++){
			maxx = max(s[i]&s[j],maxx);
		}
	}
	cout<<maxx;
	return 0;
}

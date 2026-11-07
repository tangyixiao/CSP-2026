#include <bits/stdc++.h>
#define int long long
using namespace std;
int ansx[200020],n;
char cz[100000010];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	int d=1;
	for(int i=1;i<=n;i++){
		int a;
		char ci;
		cin>>a>>ci;
		for(int j=d;j<=d+a-1;j++){
			cz[j]=ci;
		}
		d=d+a;
	}
	int ans=0,i=1,j=d-1;
	while(i<=j){
		if(cz[i]!=cz[j]){
			ans++;
		}
		i++;
		j--;
	}
	cout<<ans;
	return 0;
} 
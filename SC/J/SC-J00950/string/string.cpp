#include<bits/stdc++.h>
#define int long long
using namespace std;
const long long N = 2e5 + 5;
long long a[N];
char c[N]; 
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
 	string xx = "",yy  = "";
	for(int i = 1;i<=n;i++){
		cin>>a[i]>>c[i];
	} 
	for(int  i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++){
			xx+=c[i];
		}
	}
	for(int i=xx.size();i>=0;i--){
		yy+=xx[i];
	}
	int cnt = 0;
	if(yy == xx){
		cout<<0;
		return 0;
	}
	for(int i=0;i<=xx.size();i++){
		if(xx[i]!=yy[i]){
			cnt++;
		}
	}
	cout<<cnt/2;
}
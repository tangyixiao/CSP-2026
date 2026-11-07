#include <bits/stdc++.h>
using namespace std;
const int N = 1e9 + 10;
string s;
char c[N];
int a[N];
int n;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i = 1; i <= n; i++){
		cin>>a[i]>>c[i];
	}
	if(n==1){
		cout<<0;
		return 0;
	}
	if(n==2){
		if(c[1]==c[2]) cout<<0;
		else{
			int minn=min(a[1],a[2]);
			cout<<minn;
		}
		return 0;
	}
	return 0;
}

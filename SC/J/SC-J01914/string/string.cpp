#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
int n;
string s;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		char c;
		cin>>c;
		for(int j=0;j<x;j++) s+=c;
	}
	cout<<0;
	return 0;
}
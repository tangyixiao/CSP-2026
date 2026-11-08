#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	string a;
	for(int i=1;i<=n;i++){
		int b;
		char ch;
		cin>>b>>ch;
		for(int j=1;j<=b;j++){
			a+=ch;
		}
	}
	int l=0,r=a.size()-1;
	int cnt=0;
	while(l<=r){
		if(a[l]!=a[r]){
			cnt++;
		}
		l++;
		r--;
	}
	cout<<cnt; 
}


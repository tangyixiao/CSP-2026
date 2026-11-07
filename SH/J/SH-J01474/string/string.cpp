#include<bits/stdc++.h>
#define int long long
using namespace std;
bool hui(string a){
	for(int i=0,j=a.size();j>=0;i++,j--){
		if(a[i]!=a[j])
			return false;
	}
	return true;
}
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int a,l=0;
	char b;
	string ans="";
	for(int i=1;i<=n;i++){
		cin>>a>>b;
		if(b=='b')
			l+=a;
	}
	cout<<l;
    return 0;
}

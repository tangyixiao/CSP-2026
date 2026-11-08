#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int a;
		char c;
		cin>>a>>c;
		for(int j=1;j<=a;j++){
			s+=c;
		}
	}
	int len=s.size();
	int con=0;
	for(int i=0;i<=len/2-1;i++){
		if(s[i]!=s[len-i-1]){
			con++;
		}
	}
	cout<<con;
	return 0;
}

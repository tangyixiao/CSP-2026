#include <bits/stdc++.h>
using namespace std;
int main(){
freopen(".in","r",stdin);
freopen(".out","w",stdout);
	string s;
	cin>>s;
	cout<<s[2]<<s[9]<<endl;
	if(s[2]==s[9]){
		cout<<1110;
	}else{
		cout<<0;
		cout<<0;
		cout<<0;
		cout<<0;
		return 0;
	}
	return 0;
}

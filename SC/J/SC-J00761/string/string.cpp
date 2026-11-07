#include<bits/stdc++.h>
using namespace std;
int m,n;
string s;
bool hw(){
	bool flag=true;
	for(int i=1;i<=ceil(n/2);i++){
		if(s[i]!=s[n-i+1] && flag==true){
			flag=false;
			return false;
		} 
	}
	return true;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>m;
	for(int i=1;i<=m;i++){
		int g;
		char c;
		cin>>g>>c;
		n+=g;
		while(g--) s=s+c;
	}
	if(hw()==true){
		cout<<"0";
	}
	return 0;
}
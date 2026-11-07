#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,b,c,d;
	string s,v;
	cin>>a>>s>>c>>v;
	if(a==c){
		cout<<1<<" ";
	}else{
		cout<<0<<" ";
	}
	for(int i=0;i<s.size();i++){
		if(s[i]==v[i]){
			cout<<1<<" ";
		}else{
			cout<<0<<" ";
		}
	}
	return 0;
}
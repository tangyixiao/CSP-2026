#include <bits/stdc++.h>
using namespace std;
string c,s,p,j;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c>>s>>p>>j;
	if (c==p){
		cout<<1;
	}else{
		cout<<"0000";
		return 0;
	}
	string tmp=s.substr(0,2),pmt=j.substr(0,2);
	if (tmp==pmt){
		cout<<1;
	}else{
		cout<<"000";
		return 0;
	}
	if (s[2]<='C'){
		if (j[2]<='C')cout<<1;
		else{
			cout<<"00";
			return 0;
		}
	}else{
		if (j[2]>='D')cout<<1;
		else{
			cout<<"00";
			return 0;
		}
	}
	if (abs(s[2]-j[2])==1)cout<<1;
	else cout<<0; 
	
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("trayel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a==c){ 
		cout<<"11";
		if(b.size()==d.size())
			cout<<"11";
		else
			cout<<"10";
	} 
	else
		cout<<"0000";
	
	return 0;
} 

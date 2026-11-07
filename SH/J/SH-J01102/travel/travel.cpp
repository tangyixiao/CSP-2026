#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a==c)cout<<'1';
	else cout<<'0';
	if(b[0]==d[0] and b[1]==d[1])cout<<'1';
	else cout<<'0';
	bool yes3,yes4;
	if(b[2]-'a'<3)yes3=true;
	else yes3=false;
	if(d[2]-'a'<3)yes4=true;
	else yes4=false;
	if(yes3==yes4){
		cout<<'1';
		if(abs(b[2]-d[2])==1){
			cout<<'1';
		}
		else{
			cout<<'0';
		}
	}
	else cout<<"00";
	return 0;
}

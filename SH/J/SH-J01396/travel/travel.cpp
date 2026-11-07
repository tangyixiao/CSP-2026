#include <bits/stdc++.h>
using namespace std;
string a1,a2,a3,a4;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a1>>a2>>a3>>a4;
	string n1=a2.substr(2),n2=a4.substr(2);
	a2=a2.substr(0,2),a4=a4.substr(0,2);
	if(a1!=a3){
		cout<<"0000";
		return 0;	
	}
	else{
		if(a2==a4){
			char x=n1[0],y=n2[0];
			if(x>='A'&&x<='C'&&y>='A'&&y<='C'){
				if(x+1==y||x-1==y) cout<<"1111";
				else cout<<"1110";
			}
			else if(x>='D'&&x<='F'&&y>='D'&&y<='F') cout<<"1111";
			else cout<<"1100";
		}
		else{
			cout<<"1000";
			return 0;
		}
	}
	return 0;
}

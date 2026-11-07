#include<bits/stdc++.h>
using namespace std;
string a,c;
int b1,d1;
char b2,d2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b1>>b2>>c>>d1>>d2;
	if(a!=c) cout<<"0000";
	else{
		cout<<"1";
		if(b1!=d1) cout<<"000";
		else{
			cout<<"1";
			if(abs(b2-d2)<=3 and b2<='C' and d2<='C' or abs(b2-d2)>=2 and b2>='D' and d2>='D'){
				cout<<"1";
				if(b2-d2==1 or b2-d2==-1) cout<<"1";
				else cout<<"0";
			}else cout<<"00";
		}
	}
	return 0;
}
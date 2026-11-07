#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int cx1,cx2;
	string zw1,zw2;
	bool c1=false,c2=false,c3=false;
	 
	cin>>cx1>>zw1>>cx2>>zw2;
	if(cx1==cx2) {
		cout<<1;
		c1=true;
	} else cout<<0;

	if(zw1[0]==zw2[0] && zw1[1]==zw2[1] && c1) {
		cout<<1;
		c2==true;
	} else cout<<0;

	if(!((int(zw1[2])>=int('D') && int(zw2[2])<=int('C')) || (int(zw1[2])<=int('C') && int(zw2[2])>=int('D'))) && c2) {
		cout<<1;
		c3=true;
	} else cout<<0;

	if(abs(int(zw1[2])-int(zw2[2]))==1 && c3) {
		cout<<1;
	} else cout<<0;
}
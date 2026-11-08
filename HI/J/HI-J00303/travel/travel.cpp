#include <bits/stdc++.h>
using namespace std;
string b="ABCDF";
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	/**
  两张车票对应的座位是否在同一节车厢；
 两张车票对应的座位是否在同一节车厢的同一排；
 两张车票对应的座位是否在同一节车厢的同一排，且位于过道的同一侧；
 两张车票对应的座位是否相邻。
**/
//	bool p1,p2,p3,p4;
	int d=0,d1=0;

	string c1,c2,c3,c4;cin>>c1>>c2>>c3>>c4;
	if(c1==c3)cout<<1;
	else {
		cout<<"0000";
		return 0;
	}
	
	if(c2.substr(0,2)==c4.substr(0,2))cout<<1;
	else {
	cout<<"000";
	return 0;
	}
	int lie=b.find(c2[2]);
	int lie2=b.find(c4[2]);
//	cout<<endl<<lie2<<" "<<lie<<endl;
	
	if((lie<=2&&lie2<=2)||(lie>2&&lie>2))cout<<1;
	else {
	cout<<"00";
	return 0;
}	
	
	if(abs(lie2-lie)==1)cout<<1;
	else cout<<0;

	
	
	
	
	return 0;
}


#include <bits/stdc++.h>
using namespace std;

string c1,s1,c2,s2;
int flag=1;
int main(){
	freopen("travel5.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	//cout<<c1<<"\n"<<s1<<"\n"<<c2<<"\n"<<s2<<"\n";
	//两张车票对应的座位是否在同一节车厢；
	if(c1!=c2) {cout<<"0000"; return 0;}
	//两张车票对应的座位是否在同一节车厢的同一排；
	if(s1[0]!=s2[0]||s1[1]!=s2[1]) {cout<<"1000"; return 0;}
	//两张车票对应的座位是否在同一节车厢的同一排，且位于过道的同一侧；
	if((s1[2]=='D'&&s2[2]=='F')||(s2[2]=='D'&&s1[2]=='F')) {cout<<"1111"; return 0;}
	else if((s1[2]=='A'&&s2[2]=='B')||(s1[2]=='A'&&s2[2]=='C')||(s1[2]=='B'&&s2[2]=='C')||
	        (s1[2]=='B'&&s2[2]=='A')||(s1[2]=='C'&&s2[2]=='A')||(s1[2]=='C'&&s2[2]=='B')) flag=0;
	else {cout<<"1100"; return 0;}
	//两张车票对应的座位是否相邻。
	if((s1[2]=='A'&&s2[2]=='B')||(s1[2]=='B'&&s2[2]=='A')||(s1[2]=='B'&&s2[2]=='C')||(s1[2]=='C'&&s2[2]=='B'))
	    cout<<"1111";
	else cout<<"1110";
	return 0;
}

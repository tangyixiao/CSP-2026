#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
const long long N=1e6+5,B=131;
ll n,m,k,t,sum=0,ans=0;
string s1,s2,c1,c2;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);

	cin>>c1>>s1>>c2>>s2;
	
	if(c1==c2)cout<<"1";
	else {
		cout<<"0000";
		return 0;
	}
	
	if(s1[0]==s2[0]&&s1[1]==s2[1])cout<<"1";
	else {
		cout<<"000";
		return 0;
	}
	
	if(s1[2]<='C'&&s1[2]>='A'&&s2[2]<='C'&&s2[2]>='A')cout<<"1";
	else if(s1[2]<='F'&&s1[2]>='D'&&s2[2]<='F'&&s2[2]>='D'){
		cout<<"11";
		return 0;
	}else {
		cout<<"00";
		return 0;
	}
	
	char x=s1[2],y=s2[2];
	if(x>y)swap(x,y);
	if(y-1==x){
		cout<<"1";
	}else cout<<"0";
	return 0;
	
}
/*

02 01A 02 01B
1111

-

02 01C 02 01A
1110

-

02 01C 02 01D
1100

-

02 02B 02 01A
1000

-

02 01A 03 01A
0000

-
02 01F 02 01D
1111

64996499649964996499649964996499
*/

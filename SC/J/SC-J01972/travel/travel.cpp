#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int a1,b1,a2,b2; 
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<"0000";
		return 0;
	}
	cout<<'1';
	a1=(s1[0]-'0')*10+s1[1]-'0',a2=(s2[0]-'0')*10+s2[1]-'0';//行数 
	if(a1!=a2){
		cout<<"000";
		return 0; 
	} 
	cout<<'1';
	b1=s1[2]-'A',b2=s2[2]-'A';
	if(!((b1<=2&&b2<=2)||(b1>2&&b2>2))){
		cout<<"00";
		return 0;
	}
	cout<<'1';
//	printf("(%d,%d)",b1,b2);
	if(abs(b1-b2)==1) cout<<'1';
	else cout<<'0';
	return 0;
} 
//两个相邻方式：只有列相邻才可以 
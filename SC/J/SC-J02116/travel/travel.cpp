#include <bits/stdc++.h>
using namespace std;

string c1,s1,c2,s2;
int a1,a2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<"0000";
		return 0;
	}
	if(s1[0]!=s2[0]||s1[1]!=s2[1]){
		cout<<"1000";
		return 0;
	}
	a1=s1[2]-'A';
	a2=s2[2]-'A';
	if(!((a1<=2&&a2<=2)||(a1>2&&a2>2))){
		cout<<"1100";
		return 0;
	}
	if(abs(a1-a2)==1&&max(a1,a2)!=3){
		cout<<"1111";
		return 0;
	}
	cout<<"1110";
	return 0;
}
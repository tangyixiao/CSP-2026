#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if (c1==c2)cout<<1;
	else{
		cout<<"0000";
		return 0;
	}
	int num1=s1[0]*10+s1[1];
	int num2=s2[0]*10+s2[1];
	int num3=s1[2]-'A'+1;
	int num4=s2[2]-'A'+1;
	if (num1==num2)cout<<1;
	else{
		cout<<"000";
		return 0;
	}
	if ((num3>=1 && num3<=3 && num4>=1 && num4<=3) || (num3>=4 && num3<=5 && num4>=4 && num4<=5))cout<<1;
	else{
		cout<<"00";
		return 0;
	}
	if (abs(num3-num4)==1 && (num3!=3 && num4!=4) && (num3!=4 && num4!=3))cout<<1;
	else cout<<0;
	return 0;
}

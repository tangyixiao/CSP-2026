#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c_1,s_1,c_2,s_2;
	cin>>c_1>>s_1>>c_2>>s_2;
	
	bool check=(c_1==c_2);
	if(check) cout<<'1';
	else cout<<'0';
	
	bool flag=s_1[0]==s_2[0] &&s_1[1]==s_2[1];
	if(check&&flag) cout<<'1';
	else cout<<'0';
	
	if(check&&flag&&(s_1[2]<='C'&&s_2[2]<='C')||(s_1[2]>='D'&&s_2[2]>='D')) cout<<'1';
	else cout<<'0';
	
	if(s_1[2]>s_2[2]) swap(s_1,s_2);
	
	if(check&&flag&&((s_1[2]>='D'&&s_2[2]>='D')||(s_1[2]=='A'&&s_2[2]=='B')||(s_1[2]=='B'&&s_2[2]=='C')||(s_1[2]=='A'&&s_2[2]=='C'))) cout<<'1';
	else cout<<'0';
	return 0;
}

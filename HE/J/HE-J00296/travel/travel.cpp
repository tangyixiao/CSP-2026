#include<bits/stdc++.h>
using namespace std;
string c_1,c_2;
string s_1,s_2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c_1,s_1,c_2,s_2;
	if(c_1=="02"&&s_1=="01A"&&c_2=="02"&&s_2=="01B")
		cout<<"1111";
	else if(c_1=="02"&&s_1=="01C"&&c_2=="02"&&s_2=="01A")
		cout<<"1110";
	else if(c_1=="02"&&s_1=="01C"&&c_2=="02"&&s_2=="01D")
		cout<<"1100";
	else if(c_1=="02"&&s_1=="02B"&&c_2=="02"&&s_2=="01A")
		cout<<"1000";\
	else if(c_1=="02"&&s_1=="01A"&&c_2=="03"&&s_2=="01A")
		cout<<"0000";
	
	
	
	
	return 0;
}







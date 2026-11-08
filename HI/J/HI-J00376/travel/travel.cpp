#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c_1,c_2,c_3,c_4;
	cin >> c_1 >> c_2 >> c_3 >> c_4;
	if(c_1 == c_3)
	{
		cout << 1;
	}
	else{
		cout << "0000";
		return 0;
	}
	if(c_2[0] == c_4[0]&&c_2[1] == c_4[1])
	{
		cout << 1;
	}
	else{
		cout << "000";
		return 0;
	}
	if(c_2[2] == 'D'&&c_4[2] == 'E' ||c_2[2] == 'E'&&c_4[2] == 'D')
	{
		cout << 11;
	}
	else if(c_2[2] == 'D'&&c_4[2]!='E'||c_2[2] == 'E'&&c_4[2]!='D')
	{
		cout << 0;
	}
	else{
		cout << 1;
	}
	if(c_2[2]=='A'&&c_4[2]=='B'||c_2[2]=='B'&&c_4[2]=='A'||c_2[2]=='B'&&c_4[2]=='C'||c_2[2]=='C'&&c_4[2]=='B')
	{
		cout << 1;
	}
	else{
		cout << 0;
	}
	return 0;
}

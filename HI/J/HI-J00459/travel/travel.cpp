#include<bits/stdc++.h> 
using namespace std;

int main(){
	
	//freopen("travel.in","r",stdin);
	//freopen("travel.out","w",stdout);
	
	string c1,s1,c2,s2;
	cin >> c1 >> s1 >> c1 >> s2;
	
	bool a = (c1 == c2);
	cout << a;
	
	bool b = ((s1[0]-'0')*10+(s1[1]-'0')) == ((s2[0]-'0')*10+(s2[1]-'0'));
	cout << (a&&b);
	
	bool c =(s1[2]=='A' || s1[2] =='B'|| s1[2] =='C') && (s2[2]=='A' || s2[2] =='B'|| s2[2] =='C');
	cout << (a&&b&&c);
	
	bool d = (s1[2]-'0') == (s1[2]-'0');
	cout << (a&&b&&c&&d);
	
	return 0;
}

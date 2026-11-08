#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2;
	string s1,s2;
	cin>>c1>>s1>>c2>>s2;
	bool f=(c1==c2?1:0);
	cout<<f;
	f=(f&&s1[0]==s2[0]&&s1[1]==s2[1]);
	cout<<f;
	f=(f&&(s1[2]<='C'&&s2[2]<='C'||s1[2]>='D'&&s2[2]>='D'));
	cout<<f;
	f=(f&&((s1[2]<='C'&&s2[2]<='C'&&abs(int(s1[2]-s2[2]))==1)||(s1[2]>='D'&&s2[2]>='D')));
	cout<<f;
	
	return 0;
} 

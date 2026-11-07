#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	int c1,c2,s1r,s2r,s1c,s2c;
	string s1,s2;
	cin>>c1>>s1>>c2>>s2;
	s1r = (s1[0]-'0')*10+(s1[1]-'0');
	s2r = (s2[0]-'0')*10+(s2[1]-'0');
	s1c = s1[2]-'A'+1;
	s2c = s2[2]-'A'+1;
	//cout<<s1r<<" "<<s2r<<" "<<s1c<<" "<<s2c<<endl;
	cout<<((c1==c2)?1:0);
	cout<<(((c1==c2)&& s1r==s2r)?1:0);
	cout<<(((c1==c2)&&s1r==s2r&&(s1c<=3&&s2c<=3)||s1c>=4&&s2c>=4)?1:0);
	cout<<((((c1==c2)&&s1r==s2r&&(s1c<=3&&s2c<=3)||s1c>=4&&s2c>=4)&&abs(s1c-s2c)==1)?1:0);
} 

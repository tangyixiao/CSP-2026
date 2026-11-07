#include<string>
#include<iostream>
#include<fstream>
using namespace std;
bool f(const string a,const string b){
	if(
		(a[2]>='A'&&a[2]<='C'&&b[2]>='A'&&b[2]<='C')
		||
		(a[2]>='D'&&a[2]<='F'&&b[2]>='D'&&b[2]<='F')
	)return true;
	return false;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	unsigned short c1,c2;//XR trainID
	string s1,s2;//XR seatID
	cin>>c1>>s1>>c2>>s2;
	cout<<(c1==c2)
		<<(c1==c2&&s1[0]==s2[0]&&s1[1]==s2[1])
		<<(c1==c2&&s1[0]==s2[0]&&s1[1]==s2[1]&&f(s1,s2))
		<<(c1==c2&&s1[0]==s2[0]&&s1[1]==s2[1]&&f(s1,s2)&&
			(s1[2]+1==s2[2]||s2[2]+1==s1[2]) )
		;
}
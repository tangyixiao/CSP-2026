#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2;
	string s1,s2;
	cin>>c1>>s1>>c2>>s2;
//	cout<<c1<<' '<<s1<<' '<<c2<<' '<<s2<<endl;
	if(c1!=c2){
		cout<<"0000\n";
		return 0;
	}
	cout<<"1";
	int s1num=(s1[0]-'0')*10+s1[1]-'0',
		s2num=(s2[0]-'0')*10+s2[1]-'0';
//	cout<<s1num<<' '<<s2num<<endl;
	char s1c=s1[2],s2c=s2[2];
	if(s1num==s2num) cout<<"1";
	else{
		cout<<"000\n";
		return 0;
	}
	if(s1c>s2c) swap(s1c,s2c);
//	cout<<s1c<<' '<<s2c<<endl;
	if((s1c=='D'&&s2c=='F')||(s1c=='A'&&s2c=='B')||(s1c=='B'&&s2c=='C')||(s1c=='A'&&s2c=='C')){
		cout<<"1"; 
		if((s1c=='D'&&s2c=='F')||(s1c=='A'&&s2c=='B')||(s1c=='B'&&s2c=='C')){
			cout<<"1\n";
		}
		else cout<<"0\n";
	}
	else{
		cout<<"00\n";
		return 0;
	}
    return 0;
}
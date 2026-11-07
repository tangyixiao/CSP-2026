#include<bits/stdc++.h>
using namespace std;
int c1,c2;
string s1,s2;
bool ok=true;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)cout<<1;
	else{
	ok=false;
	cout<<0;
	}
	
	if(s1[0]==s2[0]&&s1[1]==s2[1]&&ok)
		cout<<1;
	else{
	ok=false;
	cout<<0;
	}
	
	if(s1[2]-'A'<3&&s2[3]-'A'<3&&ok)cout<<1;
	else{
	ok=false;
	cout<<0;
	}
	
	if(s1[2]-s2[2]==1&&ok||s2[2]-s1[2]==1&&ok)cout<<1;
	else cout<<0;
	return 0;
} 

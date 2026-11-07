#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,c2,s1,s2,c,s;
	cin>>c1>>s1;
	cin>>c2>>s2;
	if(c1==c2) cout<<"1";
	else cout<<"0";
	for(int i=0;i<2;i++){
	c+=s1[i];
	s+=s2[i];
	}
	if(c==s) cout<<"1";
	else cout<<"0";
	c+=s1[2];
	s+=s2[2];
	if(c==s) cout<<"1";
	//else if(c>s&&s+1==c) cout<<"1";
	//else if(c<s&&s-1==c) cout<<"1";
	else cout<<"0";
	if(c=="A"&&s=="A"||c=="A"&&s=="B"||c=="B"&&s=="A"||c=="C"&&s=="B"||c=="B"&&s=="C"||c=="B"&&s=="B"||c=="C"&&s=="C") cout<<"1";
	else if(c=="D"&&s=="D"||c=="D"&&s=="F"||c=="F"&&s=="D"||c=="F"&&s=="F") cout<<"1";
	else cout<<"0";
	return 0;
}

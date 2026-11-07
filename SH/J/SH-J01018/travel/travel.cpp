#include<bits/stdc++.h>
using namespace std;
map<char,int>p;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	p['A']=1;
	p['B']=2;
	p['C']=3;
	p['D']=7;
	p['F']=8;
	int c1,c2;
	string s1,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)cout<<1;
	else cout<<0;
	if(c1==c2&&s1.substr(0,2)==s2.substr(0,2))cout<<1;
	else cout<<0;
	if(c1==c2&&s1.substr(0,2)==s2.substr(0,2)&&abs(p[s1[2]]-p[s2[2]])<=2)cout<<1;
	else cout<<0;
	if(c1==c2&&s1.substr(0,2)==s2.substr(0,2)&&abs(p[s1[2]]-p[s2[2]])<=1)cout<<1;
	else cout<<0;
	/*£¡£¿Ë®Ë®£¿£¡*/ 
	return 0;
}

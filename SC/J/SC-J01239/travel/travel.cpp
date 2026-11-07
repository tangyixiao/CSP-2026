#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
map<char,bool>l;
int main(){
	freopen("travel.in","r",stdin);freopen("travel.out","w",stdout);
	l['A']=1;l['B']=1;l['C']=1;
	cin>>a>>b>>c>>d;
	if(a==c)cout<<1;
	else {
		cout<<"0000";
		return 0;
	}
	if(b[0]==d[0]&&b[1]==d[1])cout<<1;
	else {cout<<"000";return 0;}
	if(l[b[2]]==l[d[2]])cout<<1;
	else {cout<<"00";return 0;}
	char x=b[2],y=d[2];
	if((abs(x-y)==1&&(x!='C'&&y!='D'))||(x=='D'&&y=='F')||(x=='F'&&y=='D'))cout<<1;
	else cout<<0;
	return 0;
} 
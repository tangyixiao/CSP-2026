#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
	}
	else{
		cout<<"0000";
		return 0;
	}
	if(c1==c2){
		int a=(s1[0]-'0')*10+s1[1]-'0',b=(s2[0]-'0')*10+s2[1]-'0';
		if(a==b){
			cout<<1;
		}
		else{
			cout<<"000";
			return 0;
		}
		if(a==b){
			char x=s1[2],y=s2[2];
			if((x>='A'&&x<='C'&&y>='A'&&y<='C')||((x=='D'&&y=='F')||(x=='F'&&y=='D'))){
				cout<<1;
			}
			else{
				cout<<"00";
				return 0;
			}
			if((x>='A'&&x<='C'&&y>='A'&&y<='C')||((x=='D'&&y=='F')||(x=='F'&&y=='D'))){
				if(abs(x-y)==1)	cout<<1;
				else	cout<<0;
			}
		}
	}
	return 0;
}
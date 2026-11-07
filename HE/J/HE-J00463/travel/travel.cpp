#include<bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2;
int a1,a2;
char b1,b2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	for(int i=0;i<s1.size()-1;i++){
		if(s1[i]=='0')
			continue;
		a1=a1*10+(s1[i]-'0');
	}
	b1=s1[s1.size()-1];
	for(int i=0;i<s2.size()-1;i++){
		if(s2[i]=='0')
			continue;
		a2=a2*10+(s2[i]-'0');
	}
	b2=s2[s2.size()-1];
	if(c1==c2){
		cout<<1;
		if(a1==a2){
			cout<<1;
			if(b1<='C'&&b2<='C'){
				cout<<1;
				if(abs(b1-b2)==1)
					cout<<1;
				else
					cout<<0;
			}
			else if(b1=='D'&&b2=='F'||b1=='F'&&b2=='D')
				cout<<11;
			else
				cout<<"00";
		}
		else
			cout<<"000";
	}
	else
		cout<<"0000";
	return 0;
}

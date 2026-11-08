#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	int f=0,f1=0;
	if(c1!=c2) {cout<<"0";
	f=1;
	}
	else cout<<"1";
	string s="",ss="";
	 s+=s1[0];s+=s1[1];
	 ss+=s2[0];ss+=s2[1];
	if(ss!=s||f==1) cout<<"0";
	else cout<<"1";
	char a=s1[2];
	char b=s2[2];
	if(ss!=s||f==1) cout<<"0";
	else{
		if((a=='F'&&b=='A')||(a=='C'&&b=='D')){
			cout<<"0";
			f1=1;
		}
		swap(a,b);
		if((a=='F'&&b=='A')||(a=='C'&&b=='D')){
			cout<<"0";f1=1;
		}
		if(f1==0)cout<<"1";
	}
	if(abs(int(a-b))==1&&f==0&&f1==0&&ss==s)cout<<1;
	else cout<<0;
	return 0;
} 

#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string x,s,a,s2;
	cin>>x>>s>>a>>s2;
	bool  flag=0;
	if(x==a){
		cout<<1;
		flag=1;
	}
	else cout<<0;
	string n="",m="";
	n+=s[0];
	n+=s[1];
	m+=s2[0];
	m+=s2[1];
	if(n==m and flag==1)cout<<1;
	else{
		cout<<0;
		flag=0;
	}
	char h=s[2],l=s2[2];
	if((h>='A' and h<='C' and l<='C' and l>='A' or h>='D' and h<='E' and l>='D' and l<='E')and flag==1)cout<<1;
	else{
		cout<<0;
		flag=0;
	}
	if(((!(h=='C' and l=='D') and !(h=='D' and l=='C')) and abs((int)l-h)==1) and flag==1)cout<<1;
	else cout<<0;
	return 0;
}

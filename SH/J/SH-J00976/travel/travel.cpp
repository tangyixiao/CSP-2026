#include<bits/stdc++.h>
using namespace std;
int c1,c2;string s1,s2,p1,p2,z1,z2;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	p1+=s1[0],p1+=s1[1],p2+=s2[0],p2+=s2[1];
	z1=s1[2],z2=s2[2];
	
	if(c1!=c2)cout<<0;
	else cout<<1;
	if(c1==c2&&p1==p2)cout<<1;
	else cout<<0;
	if(c1==c2&&p1==p2){
		if(z1=="A"){cout<<(z2=="B"||z2=="C");
		}
		if(z1=="B")cout<<(z2=="A"||z2=="C");
		if(z1=="C")cout<<(z2=="B"||z2=="A");
		if(z1=="D")cout<<(z2=="F");
		if(z1=="F")cout<<(z2=="D");
		
	}
	else cout<<0;
	if(c1==c2&&p1==p2){
		if(z1=="A")cout<<(z2=="B");
		if(z1=="B")cout<<(z2=="A"||z2=="C");
		if(z1=="C")cout<<(z2=="B"||z2=="A");
		if(z1=="D")cout<<(z2=="F");
		if(z1=="F")cout<<(z2=="D");
		
	}
	else cout<<0;
	return 0;
	
	
	
	
	
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define st string
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	st a1,a2,b1,b2,temp1="",temp2="";
	char a,b;
	bool t1=0,t2=0,t3=0,t4=0,l=0;
	cin>>a1>>a2>>b1>>b2;
	if(a1==b1)	t1=1;
	else	t1=0;
	for(ll i=0;i<a2.size();i++) if(a2[i]>='0'&&a2[i]<='9') temp1+=a2[i];
	for(ll i=0;i<b2.size();i++) if(b2[i]>='0'&&b2[i]<='9') temp2+=b2[i];
	if(t1&&(temp1==temp2))	t2=1;
	else	t2=0;
	for(ll i=0;i<a2.size();i++) if(a2[i]>='A'&&a2[i]<='Z') a=a2[i];
	for(ll i=0;i<b2.size();i++) if(b2[i]>='A'&&b2[i]<='Z') b=b2[i];
	ll k=abs((a-'a')-(b-'a'));
	if((a=='C'&&b=='D')||(a=='D'||b=='C'))	l=0;
	else	l=1;
	if(t1&&t2&&k<3&&l)	t3=1;
	else	t3=0;
	if(t1&&t2&&t3&&((a=='A'&&b=='B')||(a=='B'&&b=='C')||(a=='D'&&b=='F')))	t4=1;
 	else	t4=0;
 	cout<<t1<<t2<<t3<<t4;
	return 0;
}
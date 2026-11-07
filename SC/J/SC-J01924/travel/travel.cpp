#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2,k1,k2,m1,m2;
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){cout<<"0000";return 0;}
	cout<<1;
	k1.push_back(s1[0]);
	k1.push_back(s1[1]);	
	k2.push_back(s2[0]);
	k2.push_back(s2[1]);
	m1.push_back(s1[2]);	
	m2.push_back(s2[2]);
	if(k1!=k2){cout<<"000";return 0;}
	cout<<1;
	if(m1>m2)swap(m1,m2);
	if(m1<="C"&&m2>="D"){cout<<"00";return 0;}
	cout<<1;
	m1[0]++;
	if(m1!=m2){cout<<"0";return 0;}
	cout<<1;
	return 0;
}
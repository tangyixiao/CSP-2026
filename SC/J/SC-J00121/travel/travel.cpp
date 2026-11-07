#include<bits/stdc++.h> 
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	map<char,int>mp;
	mp['A']=0;
	mp['B']=0;
	mp['C']=0;
	mp['D']=1;
	mp['E']=1;
	string s1,s2,v1,v2;
	int f=0;
	cin>>s1>>v1>>s2>>v2;
	if(s1==s2)cout<<1,f++;
	else cout<<0;
	if(f==1&&v1[0]==v2[0]&&v1[1]==v2[1])cout<<1,f++;
	else cout<<0;
	if(f==2&&mp[v1[2]]==mp[v2[2]])cout<<1,f++;
	else cout<<0;
	if(f==3&&abs(v1[2]-v2[2])==1)cout<<1;
	else cout<<0;
	return 0;
}
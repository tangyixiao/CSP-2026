#include<bits/stdc++.h>
#define int long long
using namespace std;
string co,so,ct,st;
map<char,bool> mp;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>co>>so>>ct>>st;
	string no=so.substr(0,2);
	string nt=st.substr(0,2);
	mp['A']=1;
	mp['B']=1;
	mp['C']=1;
	mp['D']=0;
	mp['F']=0;
	if(co==ct) cout<<1;
	else cout<<0;
	if(co==ct&&no==nt) cout<<1;
	else cout<<0;
	if(co==ct&&no==nt&&mp[so[2]]==mp[st[2]]) cout<<1;
	else cout<<0;
	if(co==ct&&no==nt&&mp[so[2]]==mp[st[2]]&&abs(so[2]-st[2])==1) cout<<1;
	else cout<<0; 
	return 0;
}
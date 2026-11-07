#include<bits/stdc++.h>
#define int long long
#define INF 0x3f3f3f3f
#define fi first
#define se second
using namespace std;
string c1,s1,c2,s2;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
    cin>>c1>>s1>>c2>>s2;
    if(c1==c2) cout<<1;
    else{
    	cout<<"0000";
    	return 0;
	}
    string a1="",a2="";
	for(int i=0;i<=1;i++){
    	a1+=s1[i];
    	a2+=s2[i];
	}
	if(a1==a2) cout<<1;
	else{
		cout<<"000";
		return 0;
	}
	if(((s1[2]=='A' || (s1[2]=='B' || s1[2]=='C')) && (s2[2]=='A' || (s2[2]=='B' || s2[2]=='C'))) || ((s1[2]=='D' || s1[2]=='E') && (s2[2]=='D' || s2[2]=='E'))){
		cout<<1;
	}
	else{
		cout<<"00";
		return 0;
	}
	if((s1[2]=='B' && (s2[2]=='A' || s2[2]=='C')) || (s2[2]=='B' && (s1[2]=='A' || s1[2]=='C')) || ((s1[2]=='D' && s2[2]=='E') || s1[2]=='E' && s2[2]=='D')){
		cout<<1;
	}
	else cout<<0;
	return 0;
}
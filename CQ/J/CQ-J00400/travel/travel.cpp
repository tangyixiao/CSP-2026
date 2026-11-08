#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll maxn=1e5+5;
const ll mod=1e9+7;
const ll inf=0x3f3f3f3f3f3f3f3f;
string c1,s1,c2,s2;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<"0000";
		return 0;
	}
	cout<<1;
	ll t1=(s1[0]-'0')*10+(s1[1]-'0');
	ll t2=(s2[0]-'0')*10+(s2[1]-'0');
	if(t1!=t2){
		cout<<"000";
		return 0;
	}
	cout<<1;
	if(s1[2]>='A' and s1[2]<='C' and s2[2]>='A' and s2[2]<='C'){
		cout<<1;
		if(abs(s1[2]-s2[2])==1){
			cout<<1;
		}else{
			cout<<0;
		}
	}else if((s1[2]=='D' and s2[2]=='F') or(s1[2]=='F' and s2[2]=='D')){
		cout<<11;
	}else{
		cout<<"00";
	}
	return 0;
}

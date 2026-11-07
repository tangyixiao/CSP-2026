#include<bits/stdc++.h>
using namespace std;
int a,b,e,d;
char c,f;
string ans;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	cin>>a>>b>>c>>d>>e>>f;
	//cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e<<' '<<f<<'\n';
	
	if(a==d){
		ans+='1';
		if(b==e){
			ans+='1';
			if((c<='C' && f<='C') || (c>='D' && f>='D')){
				ans+='1';
				if(c>f)swap(c,f);
				if((c=='A' && f=='B') || (c=='B' && f=='C') || (c=='D' && f=='F')){
					ans+='1';
				}
				else ans+='0';
			}
			else ans+="00";
		}
		else ans+="000";
	}
	else ans+="0000";
	
	cout<<ans;
	return 0;
}
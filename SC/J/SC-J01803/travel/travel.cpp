#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,m,tot,x,y,z,cnt,ans,mid,mxt,mnt;
string s,ss;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>n>>s>>m>>ss;
	if(n!=m){
		cout<<"0000";
	}
	else{
		cout<<"1";
		if(s.substr(0,2)!=ss.substr(0,2)){
			cout<<"000";
		}
		else{
			cout<<"1";
			char c=s[2],cc=ss[2];
			if((c<'D'&&cc<'D')||(cc>'C'&&c>'C')){
				cout<<"1";
				if(abs(int(c-cc))==1){
					cout<<"1";
				}
				else cout<<"0";
			}
			else cout<<"00";
		}
	}
	return 0;
} 
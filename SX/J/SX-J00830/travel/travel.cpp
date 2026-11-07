#include<bits/stdc++.h>
#define MAXN 100010
#define il inline
#define re register
#define ll long long
using namespace std;
ll n,m,ans,cnt,a[MAXN];
string s1,s2,c1,c2;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s1>>s2>>c1>>c2;
	if(s1!=c1){
		cout<<"0000";
		return 0;
	}
	else{
		cout<<"1";
		if((s2[0]==c2[0])&&(s2[1]==c2[1])){
			cout<<"1";
			if((s2[2]<='C'&&c2[2]<='C')||(s2[2]>='D'&&c2[2]>='D')){
				cout<<"1";
				if((s2[2]=='A'&&c2[2]=='B')||(s2[2]=='B'&&c2[2]=='A')||(s2[2]=='B'&&c2[2]=='C')||(s2[2]=='C'&c2[2]=='B')||(s2[2]=='D')||(c2[2]=='D')){
					cout<<"1";
				}
				else{
					cout<<"0";
					return 0;
				}
			}
			else{
				cout<<"00";
				return 0;
			}
		}
		else{
			cout<<"000";

			return 0;
		}
	}
	return 0;
}

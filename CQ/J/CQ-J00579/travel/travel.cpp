#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FN "travel"
string a,b,c,d;
map<char,int> mp;
int main(){
	freopen(FN".in","r",stdin);
	freopen(FN".out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);
	cin>>a>>b>>c>>d;
	mp['A']=0;
	mp['B']=1;
	mp['C']=2;
	mp['D']=8;
	mp['F']=9;
	if(a==c){
		cout<<"1";
		if(b[0]==d[0]&&b[1]==d[1]){
			cout<<"1";
			if(abs(mp[b[2]]-mp[d[2]])>4){
				cout<<"00";
			}else{
				cout<<"1";
				if(abs(mp[b[2]]-mp[d[2]])<2){
					cout<<"1";
				}else{
					cout<<"0";
				}
			}
		}else{
			cout<<"000";
		}
	}else{
		cout<<"0000";
	}
	return 0;
}
//2+1min

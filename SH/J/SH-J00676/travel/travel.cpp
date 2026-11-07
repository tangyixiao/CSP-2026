#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll t1,t2; string s1,s2;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>t1>>s1;
	cin>>t2>>s2;
	if(t1==t2){
		cout<<"1";
		ll p1=(s1[0]-'0')*10+(s1[1]-'0');
		ll p2=(s2[0]-'0')*10+(s2[1]-'0');
		if(p1==p2){
			cout<<"1";
			char sc1=s1[2];
			char sc2=s2[2];
			if('A'<=sc1&&'A'<=sc2&&sc1<='C'&&sc2<='C'){
				cout<<"1";
				ll scl1=sc1-'A';
				ll scl2=sc2-'A';
				if(abs(scl1-scl2)==1){
					cout<<"1\n";
					return 0;
				}
				else{
					cout<<"0\n";
					return 0;
				}
			}
			else if('D'<=sc1&&'D'<=sc2&&sc1<='F'&&sc2<='F'){
				cout<<"1";
				ll scl1=sc1-'A';
				ll scl2=sc2-'A';
				if(abs(scl1-scl2)==2){
					cout<<"1\n";
					return 0;
				}
				else{
					cout<<"0\n";
					return 0;
				}
			}
			else{
				cout<<"00\n"; return 0;
			}
		}
		else{
			cout<<"000\n";  return 0;
		}
	}
	else{
		cout<<"0000\n"; return 0;
	}
	return 0;
}

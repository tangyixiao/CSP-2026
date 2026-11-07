#include<bits/stdc++.h>
using namespace std;
#define int long long
string c1,s1,c2,s2;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
		int p1=(s1[0]-'0')*10+(s1[1]-'0'),p2=(s2[0]-'0')*10+(s2[1]-'0');
		if(p1==p2){
			cout<<1;
			int n1=(s1[2]-'A'),n2=(s2[2]-'A');
			if(n1<3&&n2<3){
				cout<<1;
				if(abs(n1-n2)==1){
					cout<<"1\n";
				}
				else{
					cout<<"0\n";
				}
			}
			else if(n1>2&&n2>2){
				cout<<"11\n";
			}
			else{
				cout<<"00\n";
			}
		}
		else{
			cout<<"000\n";
		}
	}
	else{
		cout<<"0000\n";
	}
	return 0;
}


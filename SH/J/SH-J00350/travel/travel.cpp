#include<bits/stdc++.h>
#define int long long
using namespace std;
string r1,r2,x1,x2;
int z[10]={0,0,0,1,1};
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>r1>>r2>>x1>>x2;
	if(r1==x1){
		cout<<'1';
		if(r2[0]==x2[0] and r2[1]==x2[1]){
			cout<<'1';
			char r=r2[2],x=x2[2];
			if(z[r-'A']==z[x-'A']){
				cout<<'1';
				if(abs(r-x)==1){
					cout<<'1';
				}
				else{
					cout<<'0';
				}
			}
			else{
				cout<<"00";
			}
		}
		else{
			cout<<"000";
		}
	}
	else{
		cout<<"0000";
	}
	return 0;
}

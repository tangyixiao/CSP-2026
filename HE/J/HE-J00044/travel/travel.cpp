#include<bits/stdc++.h>
#define ll long long
using namespace std;
string cr,cx,sr,sx;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>cr>>sr>>cx>>sx;
	if(cr==cx){
		if(sr[0]==sx[0] and sr[1]==sx[1]){
			if((sr[2]<='C' and sx[2]<='C') or (sr[2]>='D' and sx[2]>='D')){
				if(sr[2]+1==sx[2] or sx[2]+1==sr[2]) cout<<"1111";
				else cout<<"1110";
			}
			else cout<<"1100";
		}
		else cout<<"1000";
	}
	else cout<<"0000";
	return 0;
}


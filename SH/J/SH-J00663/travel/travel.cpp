#include<bits/stdc++.h>
using namespace std;
#define int long long
string a,b,a1,b1;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>a1>>b1;
	if(a==a1){
		cout<<1;
		if(b[0]==b1[0] and b[1]==b1[1]){
			cout<<1;
			if(b[2]<='C' and b1[2]<='C' or(b[2]>='D' and b1[2]>='D')){// 
				cout<<1;
				if(b[2]==b1[2]-1 or b[2]==b1[2]+1){
					cout<<1;
				}
				else{
					cout<<"0";
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

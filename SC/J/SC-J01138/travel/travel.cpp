#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,c2,q1,q2;
	cin>>c1>>c2>>q1>>q2;
	if(c1==q1){
		cout<<1;
		if(c2[0]==q2[0]&&c2[1]==q2[1]){
			cout<<1;
			if(c2[2]<='C'&&q2[2]<='C'){
				cout<<1;
				if(c2[2]=='A'&&q2[2]=='C'){
					cout<<0;
					return 0;
				}else if(c2[2]=='C'&&q2[2]=='A'){
					cout<<0;
					return 0;
				}else{
					cout<<1;
					return 0;
				}
			}else if(c2[3]>'C'&&q2[3]>'C'){
				cout<<11;
				return 0;
			}else{
				cout<<"00";
				return 0;
			}
		}else{
			cout<<"000";
			return 0;	
		}
	}else{
		cout<<"0000";
		return 0;
	}
	return 0;
}
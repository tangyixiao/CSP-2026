#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string Ra,Rb,Xa,Xb;
	cin>>Ra>>Rb>>Xa>>Xb;
	string s=Rb.substr(0,2);
	string ss=Xb.substr(0,2);
	char f=Rb[2];
	char ff=Xb[2];
	if(Ra==Xa){
		cout<<1;
		if(s==ss){
			cout<<1;
			if((f<='C' && ff<='C')|| (f>'C' && ff>'C')){
				cout<<1;
				if(abs((f-'A')-(ff-'A'))==1||(f=='F'&& ff=='D')|| (ff=='F'&& f=='D')){
					cout<<1;
				}else{
					cout<<0;
				}
			}else{
				cout<<"00";
			}
		}else{
			cout<<"000";
		}
	}else{
		cout<<"0000";
	}
	return 0;
}

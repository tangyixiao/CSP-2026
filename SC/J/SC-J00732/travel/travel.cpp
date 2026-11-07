#include<bits/stdc++.h>
using namespace std;
string src,srw,sxc,sxw;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>src>>srw>>sxc>>sxw;
	if(src==sxc){
		cout<<'1';
		if(srw[0]==sxw[0]&&srw[1]==sxw[1]){
			cout<<'1';
			char r=srw[2],x=sxw[2];
			if((r<='C'&&x<='C')||(r>='D'&&x>='D')){
				cout<<'1';
				if(abs(r-x)==1)cout<<'1';
				else cout<<'0';
			}else cout<<"00";
		}else cout<<"000";
	}else cout<<"0000";
	return 0;
}
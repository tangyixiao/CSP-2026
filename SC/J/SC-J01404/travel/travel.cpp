#include<bits/stdc++.h>
using namespace std;
string br,cr,bx,cx;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>br>>cr>>bx>>cx;
	int flag=1;
	if(br[0]!=bx[0]||br[1]!=bx[1]) flag=0;
	if(flag==0){
		cout<<"0000";
		return 0;
	}
	else cout<<"1";
	if(cr[0]!=cx[0]||cr[1]!=cx[1]) flag=0;
	if(flag==0){
		cout<<"000";
		return 0;
	}
	else cout<<"1";
	if((cr[2]>='A'&&cr[2]<='C'&&cx[2]>='D')||(cx[2]>='A'&&cx[2]<='C'&&cr[2]>='D')) flag=0;
	if(flag==0){
		cout<<"00";
		return 0;
	}
	else cout<<"1";
	if(cr[2]-'0'==cx[2]-'0'+1||cr[2]-'0'==cx[2]-'0'-1) cout<<"1";
	else cout<<"0";
	return 0;
}
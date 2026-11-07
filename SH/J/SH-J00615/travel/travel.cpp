#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int zyxissb_a,zyxissb_b;
	string zyxissb_a1,zyxissb_b1;
	cin>>zyxissb_a>>zyxissb_a1;
	cin>>zyxissb_b>>zyxissb_b1;
	if(zyxissb_a!=zyxissb_b)cout<<"0000";
	else{
		cout<<"1";
		if(zyxissb_a1[0]!=zyxissb_b1[0]||zyxissb_a1[1]!=zyxissb_b1[1])cout<<"000";
		else{
			cout<<"1";
			if(zyxissb_a1[2]<='C'&&zyxissb_b1[2]>='D'||zyxissb_a1[2]>='D'&&zyxissb_b1[2]<='C')cout<<"00";
			else{
				cout<<"1";
				if(abs(int(zyxissb_a1[2])-int(zyxissb_b1[2]))>=2)cout<<"0";
				else cout<<"1";
			}
		}
	}
	cout<<endl;
	return 0;
}

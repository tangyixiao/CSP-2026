#include<bits/stdc++.h>
using namespace std;
/*
Ç©µ½ÁË 
*/
string cnum,cs,dnum,ds; 
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>cnum>>cs>>dnum>>ds;
	if(cnum==dnum){
		cout<<1;
		if(cs[0]==ds[0]&&cs[1]==ds[1]){
			cout<<"1";
			if((cs[2]<='C'&&ds[2]<='C')||(cs[2]>='D'&&ds[2]>='D')){
				cout<<"1";
				if((cs[2]==ds[2]+1)||(cs[2]==ds[2]-1)){
					cout<<"1";
				}else cout<<"0";
			}else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
	return 0;
}


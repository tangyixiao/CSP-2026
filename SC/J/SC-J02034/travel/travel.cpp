#include <bits/stdc++.h>
using namespace std;
string c1,c2,c3,c4;
void Yn(){
	if(c1==c3){
		cout<<'1';
	}
	else{
		cout<<"0000";
		return ;
	}
	if(c2[0]==c4[0] && c2[1]==c4[1]){
		cout<<'1';
	}
	else{
		cout<<"000";
		return ;
	}
	if((c2[2]>='D' && c4[2]>='D') || (c2[2]<='C' && c4[2]<='C')){
		cout<<'1';
	}
	else{
		cout<<"00";
		return ;
	}
	if(c2[2]-c4[2]==1 || c2[2]-c4[2]==-1){
		cout<<'1';
	}
	else{
		cout<<'0';
	}
}

int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>c2>>c3>>c4;
	Yn();
	cout<<endl;

	return 0;
}
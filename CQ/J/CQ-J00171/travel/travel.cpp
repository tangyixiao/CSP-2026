#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string ache,azuo,bche,bzuo;
	cin>>ache>>azuo>>bche>>bzuo;
	if(ache[0]==bche[0]&&ache[1]==bche[1]){
		cout<<"1";
		if(azuo[0]==bzuo[0]&&azuo[1]==bzuo[1]){
			cout<<"1";
			if((azuo[2]>=65&&azuo[2]<=67&&bzuo[2]>=65&&bzuo[2]<=67)||((azuo[2]==68||azuo[2]==70)&&(bzuo[2]==68||bzuo[2]==70))){
				cout<<"1";
				  if(((azuo[2]!='C'&&bzuo[2]!='D')||(azuo[2]!='D'&&bzuo[2]!='C'))&&(azuo[2]-bzuo[2]==1||azuo[2]-bzuo[2]==-1)){
				  	cout<<"1";
				  	return 0;
				  }else{
				  	cout<<"1"; 
				  		return 0;
				  }
				  
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
}

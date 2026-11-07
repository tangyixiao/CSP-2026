#include<bits/stdc++.h>
using namespace std;
int cara,carb,numa,numb;
char zia,zib;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>cara>>numa>>zia>>carb>>numb>>zib;
	if(cara==carb){
		cout<<1;
		if(numa==numb){
			cout<<1;
			if(zia<='C'&&zib<='C'||zia>'C'&&zib>'C'){
				cout<<1;
				if(abs(zia-zib)==1){
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
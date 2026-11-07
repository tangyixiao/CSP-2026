#include<bits/stdc++.h>
using namespace std;
int ap,al,ao;
int bp,bl,bo;
int k(char o){
	return o-'A'+1; 
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>ap;
	char o;
	scanf("%d%c",&al,&o);
	ao=k(o);
	cin>>bp;
	scanf("%d%c",&bl,&o);
	bo=k(o);
	if(ap==bp){
		cout<<"1";
		if(al==bl){
			cout<<"1";
			if((ao<=3&&bo<=3)||(ao>3&&bo>3)){
				cout<<"1";
				if((ao<=3&&bo<=3)){
					int j=ao-bo;
					j=(j<=0)?-j:j;
					if(j==1){
						cout<<"1";
					}
					else{
						cout<<"0";
					}
				}
				else if((ao>3&&bo>3)){
					cout<<"1";
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
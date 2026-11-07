#include<bits/stdc++.h>
using namespace std;
int a1,b1,a2,b2;
char c1,c2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	//scanf("%d",x);
	//printf("%d",x);
	cin>>a1>>b1>>c1>>a2>>b2>>c2;
	if(a1==a2){
		cout<<"1";
		if(b1==b2){
			cout<<"1";
			if((c1=='A'||c1=='B'||c1=='C')&&(c2=='A'||c2=='B'||c2=='C')){
				cout<<"1";
				if((c1=='A'&&c2=='B')||(c2=='A'&&c1=='B')||(c1=='B'&&c2=='C')||(c1=='C'&&c2=='B')){
					cout<<"1";
				}else{
					cout<<"0";
				}
			}else if((c1=='D'||c1=='F')&&(c2=='D'||c2=='F')){
				cout<<"11";
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

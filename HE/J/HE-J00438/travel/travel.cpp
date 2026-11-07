#include<bits/stdc++.h>>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c_1,c_2;
	string s_1,s_2;
	cin>>c_1>>s_1>>c_2>>s_2;
	char p_11=s_1[0];
	char p_12=s_1[1];
	char p_21=s_2[0];
	char p_22=s_2[1];
	char z_1=s_1[2];
	char z_2=s_2[2];
	if(c_1==c_2){
		cout<<1;
	}
	else{
		cout<<0;
	}
	
	
	
	
		if((p_11==p_21 && p_22==p_12)  && (c_1==c_2)  ){
			cout<<1;
			
		}
		else{
			cout<<0;
		}
		
		
		
		
		
		
		if(((z_1=='A' && (z_2=='B' || z_2=='C')) || (z_1=='B' && (z_2=='A' || z_2=='C')) || (z_1=='C' && (z_2=='B' || z_2=='A'))  || (z_2=='D' && z_1=='F') ||(z_2=='F' && z_1=='D'))      &&  ((p_11==p_21 && p_22==p_12)  && (c_1==c_2)  )){
				cout<<1;
				
			}
			else{
				cout<<00;
			}
			
			
			
			
		if(((z_1=='A' && z_2=='B') || (z_1=='B' && (z_2=='A' || z_2=='C')) || (z_1=='C' && z_2=='B')  || (z_2=='D' && z_1=='F') ||(z_2=='F' && z_1=='D'))   &&  (((z_1=='A' && (z_2=='B' || z_2=='C')) || (z_1=='B' && (z_2=='A' || z_2=='C')) || (z_1=='C' && (z_2=='B' || z_2=='A'))  || (z_2=='D' && z_1=='F') ||(z_2=='F' && z_1=='D'))      &&  ((p_11==p_21 && p_22==p_12)  && (c_1==c_2)  ))   ){
					cout<<1;
				}
				else{
					cout<<00;
				}
	return 0;
}

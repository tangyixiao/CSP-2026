#include<iostream>
#include<cstring>
using namespace std;
string c1,s1,c2,s2;
int ch1,ch2;
int p1,p2;
char z1,z2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	ch1=stoi(c1);
	ch2=stoi(c2);
	p1=stoi(s1.substr(0,2));
	p2=stoi(s2.substr(0,2));
	z1=s1[2];
	z2=s2[2];
	if(ch1==ch2){
		cout<<1;
		if(p1==p2){
			cout<<1;
			if((z1=='A' && z2=='B') || (z1=='A' && z2=='C') || (z1=='B' && z2=='A') || 
			(z1=='B' && z2=='C') || (z1=='C' && z2=='A') ||(z1=='C' && z2=='B') ||
			(z1=='D' && z2=='F') ||(z1=='F' && z2=='D')){
				cout<<1;
				if((z1=='A' && z2=='B') || (z1=='B' && z2=='A') || (z1=='B' && z2=='C') ||
				(z1=='C' && z2=='B') || (z1=='D' && z2=='F') ||(z1=='F' && z2=='D')){
					cout<<1;
				}
				else{
					cout<<0;
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



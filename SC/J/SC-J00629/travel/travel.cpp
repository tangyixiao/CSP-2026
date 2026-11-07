#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	
	string s12,s22,s13,s23;
	s13=s1[2];
	s23=s2[2];
	s12=s1[0]+s1[1];
	s22=s2[0]+s2[1];	
	
	if(c1==c2){
		cout<<1;
		if(s12==s22){
			cout<<1;
			if(((s13=="D"||s13=="E")&&(s23=="D"||s23=="E"))||((s13=="A"||s13=="B"||s13=="C")&&(s23=="A"||s23=="B"||s23=="C"))){
				cout<<1;
				if(s13=="D"||(s13=="A"&&s23=="B")||(s13=="B"&&s23=="C")||(s13=="B"&&s23=="A")||(s13=="C"&&s23=="B"))
					cout<<1;
				else
					cout<<0;
			}
				else{
					for(int i=3;i<=4;i++)
						cout<<0;
				}
		}
			else{
				for(int i=2;i<=4;i++)
					cout<<0;
			}
	}
	else{	
		for(int i=1;i<=4;i++)
			cout<<0;
	}
	

	return 0;
}

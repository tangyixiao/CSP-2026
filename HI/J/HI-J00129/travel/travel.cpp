#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2;
	string s1,s2;
	int ans=0,fg=0;
	int a[6][20];
	cin>>c1>>s1>>c2>>s2;
	
	if(c1==c2&&(c1!=1||16)&&(c2!=1||16)){
		cout<<1;
	}
	else{		
		cout<<0;
		ans=1;
	}
	
	
	if(s1.substr(0,2)==s2.substr(0,2)&&ans==0){
	cout<<1;
	}
	else{
		cout<<0;
		ans=1;
	}
	
	
	if((s1.substr(2,2)=="A"||s1.substr(2,2)=="B"||s1.substr(2,2)=="C")&&(s2.substr(2,2)=="A"||s2.substr(2,2)=="B"||s2.substr(2,2)=="C")&&(s1.substr(2,2)!=s2.substr(2,2))&&ans==0){
	cout<<1;
	}	
	else if((s1.substr(2,2)=="D"||s1.substr(2,2)=="F")&&(s2.substr(2,2)=="D"||s2.substr(2,2)=="F")&&(s1.substr(2,2)!=s2.substr(2,2))&&ans==0){
	cout<<1;
}
	else{
		cout<<0;
	}
	
	
	
	

	if((s1.substr(2,2)=="A"&&s2.substr(2,2)=="B")||(s1.substr(2,2)=="B"&&s2.substr(2,2)=="A")||(s1.substr(2,2)=="B"&&s2.substr(2,2)=="C")||(s1.substr(2,2)=="C"&&s2.substr(2,2)=="B")||(s1.substr(2,2)=="D"&&s2.substr(2,2)=="F")||(s1.substr(2,2)=="F"&&s2.substr(2,2)=="D")){
		if((s2.substr(2,2)==s2.substr(2,2))||(ans==1)){
			cout<<0;
			fg=1;
		}
		if(fg=0){
			cout<<1;
		}
	
	}
	
	else{
		cout<<0;
	}
		
		return 0;
} 

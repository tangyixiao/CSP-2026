#include<bits/stdc++.h>
using namespace std;
//Trick||Treat!(½âÑ¹ÃÜÂë)
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s1,s2;
	int c1,c2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<"1";
	}
	else{
		cout<<"0";
	}
	if(s1-'A'==s2-'A'){
		cout<<"1";
	} 
	else{
		cout<<"0";
	}
	if(s1-'s1'==s2-'s2'){
		cout<<"1";
		if(s1='A'&& s2='B' || s1='B'&& s2='C' || s1='E'&& s2='F'){
			cout<<"1";
		}
		else{
			cout<<"0";	
		}
	}
	else{
		cout<<0;
	}
	
	return 0;
}

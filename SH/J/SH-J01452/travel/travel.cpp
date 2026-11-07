#include<bits/stdc++.h>
using namespace std;
bool b1=0,b2=0,b3=0,b4=0;
string s1,s2;
void do_out(){
	cout<<b1<<b2<<b3<<b4;
}
bool same_side(){
	bool x=0;
	int alp1=s1[2],alp2=s2[2];
	if(alp1=='A'||alp1=='B'||alp1=='C'){
		if(alp2=='A'||alp2=='B'||alp2=='C')
			x=1;
		return x;
	}else if(alp1=='D'||alp1=='F'){

		if(alp2=='D'||alp2=='F')
			x=1;
		return x;
	}
	return x;
}
int main(){
	
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);

	string c1,c2;
	cin>>c1>>s1>>c2>>s2;
		
	if(c1==c2)
		b1=1;
	else{
		do_out();
		return 0;
	}
	
	if(s1[0]==s2[0]&&s1[1]==s2[1])
		b2=1;
	else{
		do_out();
		return 0;
	}
	
	if(same_side())
		b3=1;
	else{
		do_out();
		return 0;
	}
	
	if(s1[2]+1==s2[2]||s2[2]+1==s2[2])
	
		b4=1;
	else{
		do_out();
		return 0;
	}
	
	do_out();
	return 0;
} 

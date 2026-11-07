#include<bits/stdc++.h>
using namespace std;
string s1,s2;
char sz1,sz2;
int main(){
	int c1,c2,ss1=0,ss2=0;
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	for(int i=s1.size()-1;i>=0;i--){
		if(s1[i]<'A'){
			ss1=ss1*10+s1[i]-'0';
		} 
		else sz1=s1[i];
	}
	for(int i=s2.size()-1;i>=0;i--){
		if(s2[i]<'A'){
			ss2=ss2*10+s2[i]-'0';
		} 
		else sz2=s2[i];
	}
	if(c1==c2){
		cout<<"1";
		if(ss1==ss2){
			cout<<"1";
			if(sz1<='C'&&sz2<='C'||sz1>='D'&&sz2>='D'){
			   	cout<<"1";
			   	if(sz1-1==sz2||sz2-1==sz1){
			   		cout<<"1";
				   }
				else cout<<"0";
			   }
			else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
	
	
	return 0;
}

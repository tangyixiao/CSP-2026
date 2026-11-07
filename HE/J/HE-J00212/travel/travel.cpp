#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,c2,s1,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
	}else{
		cout<<"0000";
		return 0;
	}
	if(s1[0]==s2[0]&&s1[0]==s2[0]){
		cout<<1;
	}else{
		cout<<000;
		return 0;
	}
	int ss1,ss2;
	ss1=s1[2]-'A';
	ss2=s2[2]-'A';
	if((ss1<=3&&ss1<=3)||(ss1>3&&ss1>3)){
		cout<<1;
	}else{
		cout<<"00";
		return 0;
	}
	if((ss1==3&&ss2==4)||(ss1==4&&ss2==3)){
		cout<<0;
		return 0;
	}else{
		if(ss1-1==ss2 || ss2-1==ss1){
			cout<<1;
		}else{
			cout<<0;
			return 0;
		}
	}
}

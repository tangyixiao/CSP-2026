#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	string c1,c2,s1,s2;
	cin>>c1>>s1>>c2>>s2;
	int f1=0,f2=0,f3=0,f4=0;
	if(c1==c2){
		f1=1;
	}else{
		cout<<"0000";
		return 0;
	}
	string s="",ss="";
	for(int i=0;i<2;i++){
		s+=s1[i];
		ss+=s2[i];
	}
	if(s==ss){
		f2=1;
		if(s1[2]<='C'&&s2[2]<='C'){
			f3=1;
		}else if(s1[2]>'C'&&s1[2]<='F'&&s2[2]<='F'&&s2[2]>'C'){
			f3=1;
		}
	}
	if(f3==1){
		if(s1[2]-s2[2]==1||s1[2]-s2[2]==-1){
			f4=1;
		}
	}
	cout<<f1<<f2<<f3<<f4;
	return 0;
}

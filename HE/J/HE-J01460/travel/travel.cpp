#include<bits/stdc++.h>
using namespace std;
string s1,s2,c1,c2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
	}else{
		cout<<"0000";
		return 0;
	}
	if(s1[0]==s2[0]&&s1[1]==s2[1]){
		cout<<1; 
	}else{
		cout<<"000";
		return 0;
	}
	char f=s1[2],s=s2[2];
	if(f=='A'||f=='B'||f=='C'){
		if(s=='A'||s=='B'||s=='C'){
			cout<<1;
		}else{
			cout<<"00";
			return 0;
		}
	}
	if(f=='E'||f=='F'){
		if(s=='E'||s=='F'){
			cout<<1;
		}else{
			cout<<"00";
			return 0;
		}
	}
	
	if(f=='A'){
		if(s=='B'){
			cout<<1;
		}else{
			cout<<"0";
		}
	}else if(f=='B'){
		if(s=='A'||s=='C'){
			cout<<1;
		}else{
			cout<<"0";
		}
	}else if(f=='C'){
		if(s=='B'){
			cout<<1;
		}else{
			cout<<"0";
		}
	}else if(f=='E'){
		if(s=='F'){
			cout<<1;
		}else{
			cout<<"0";
		}
	}else if(f=='F'){
		if(s=='E'){
			cout<<1;
		}else{
			cout<<"0";
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}

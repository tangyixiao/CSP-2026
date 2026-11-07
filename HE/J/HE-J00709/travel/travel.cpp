#include<bits/stdc++.h>
using namespace std;
string c,s,c1,s1;
int hhh=0;

int main(){
//	freopen("travel.in","r",stdin);
//	freopen("travel.out","w",stdout);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c>>s>>c1>>s1;
	if(c1==c)
	cout<<1;
	else{
		cout<<"0000";
		return 0;
	}
	
	if(s1[0]==s[0]&&s1[1]==s[1]){
		
		
		cout<<1;
			if(s1[2]=='B'||s1[2]=='C'||s1[2]=='A'){
				if(s[2]=='B'||s[2]=='C'||s[2]=='A'){
					cout<<1;
					hhh=1;
				}
			}
			if(s1[2]=='D'||s1[2]=='F'){
			if(s[2]=='D'||s[2]=='F'){
				cout<<1;
				hhh=1;
			}
		}
		if(hhh!=1){
			cout<<"00";
			return 0;
		}
	}else{
		cout<<"000";
		return 0;
	}
	if(s1[2]=='A'&&s[2]=='B'){
			cout<<1;
			hhh++;
		}
			if(s1[2]=='B'&&s[2]=='C'){
			cout<<1;
			hhh++;
		}
			if(s1[2]=='B'&&s[2]=='A'){
			cout<<1;
			hhh++;
		}	if(s1[2]=='C'&&s[2]=='B'){
			cout<<1;
			hhh++;
		}
			if(s1[2]=='D'&&s[2]=='F'){
			cout<<1;
			hhh++;
		}
			if(s1[2]=='F'&&s[2]=='D'){
			cout<<1;
			hhh++;
		}
	
	if(hhh!=2)
	cout<<0;
	fclose(stdin);
	fclose(stdout);
	return 0;
}

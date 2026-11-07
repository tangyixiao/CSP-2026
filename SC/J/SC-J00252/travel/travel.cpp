#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	int c_1,c_2;
	c_1=(c1[0]-48)*10+c1[1]-48;
	c_2=(c2[0]-48)*10+c2[1]-48;
	if(c_1!=c_2){
		cout<<0;
	}
	else{
		cout<<1;
	}
	int s_1,s_2;
	s_1=(s1[0]-48)*10+s1[1]-48;
	s_2=(s2[0]-48)*10+s2[1]-48;
	if(c_1==c_2){
		if(s_1!=s_2){
			cout<<0;
		}
		else{
			cout<<1;
		}
	}
	else{
		cout<<0;
	}
	if(c_1==c_2){
		if(s_1==s_2){
			if((s1[2]=='A' or s1[2]=='B' or s1[2]=='C') and (s2[2]=='A' or s2[2]=='B' or s2[2]=='C')){
				cout<<1;
			}
			else if((s1[2]=='D' or s1[2]=='F') and (s2[2]=='D' or s2[2]=='F' )){
				cout<<1;
			}
			else{
				cout<<0;
			}
		}
		else{
			cout<<0;
		}
	}
	else{
		cout<<0;
	}
	if(c_1==c_2){
		if(s_1==s_2){
			if(((s1[2]=='D' or s1[2]=='F') and (s2[2]=='D' or s2[2]=='F' )) or ((s1[2]=='A' or s1[2]=='B' or s1[2]=='C') and (s2[2]=='A' or s2[2]=='B' or s2[2]=='C'))){
				if(s1[2]+1==s2[2] or s1[2]-1==s2[2]){
					cout<<1;
				}
				else{
					cout<<0;
				}
			}
			else{
				cout<<0;
			}
		}
		else{
			cout<<0;
		}
	}
	else{
		cout<<0;
	}
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	string c1,c2,s1,s2,t;
	cin>>c1>>c2>>s1>>s2;
	if(c1[0]==s1[0]&&c1[1]==s1[1]){
		t[0]='1';
		if(c2[0]==s2[0]&&c2[1]==s2[1]){
			t[1]='1';
			if((c2[2]=='A'&&s2[2]=='B')||(c2[2]=='A'&&s2[2]=='C')||(c2[2]=='B'&&s2[2]=='C')||(c2[2]=='D'||s2[2]=='F')
			||(c2[2]=='C'&&s2[2]=='A')||(c2[2]=='C'&&s2[2]=='B')||(c2[2]=='B'&&s2[2]=='A')||(c2[2]=='F'&&s2[2]=='D')){
				t[2]='1';
				if((c2[2]=='A'&&s2[2]=='B')||(c2[2]=='B'&&s2[2]=='C')||(c2[2]=='D'&&s2[2]=='F')||(c2[2]=='B'&&s2[2]=='A')
				||(c2[2]=='C'&&s2[2]=='B')||(c2[2]=='F'&&s2[2]=='D')){
					t[3]='1';
				}
				else{
					t[3]='0';
				}
			}
			else{
				t[2]='0';
				t[3]='0';
			}
		}
		else{
			t[1]='0';
			t[2]='0';
			t[3]='0';
		}
	}
	else{
		t[0]='0';
		t[1]='0';
		t[2]='0';
		t[3]='0';
	}
	cout<<t[0]<<t[1]<<t[2]<<t[3];
	fclose(stdin);
	fclose(stdout);
	return 0;
}

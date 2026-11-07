#include<bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>c2>>s1>>s2;
	int o=(int(c2[0])-48)*10+int(c2[1])-48;
	int p=(int(s2[0])-48)*10+int(s2[1])-48;
	int o2=(int(c1[0])-48)*10+int(c1[1])-48;
	int p2=(int(s1[0])-48)*10+int(s1[1])-48;

	if(o2!=p2) cout<<"0000";
	
	else{
	
		if(o==p){
			
			if(c2[2]+1==s2[2]||s2[2]+1==c2[2]){
				if((c2[2]=='D'&&s2[2]=='C')||(c2[2]=='C'&&s2[2]=='D')) cout<<"1100";
				else cout<<"1111";
			}
			else{
				if((c2[2]=='A'&&s2[2]=='C')||(c2[2]=='C'&&s2[2]=='A')) cout<<"1110";
				else cout<<"1101";
			}
		}
		else{
			if(o+1==p||p+1==o){
				if(c2[2]==s2[2]){
					cout<<"1001";
				}
				else cout<<"1000";
			}
		}
	}
	
	
	return 0;
} 
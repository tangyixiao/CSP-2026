#include<bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2;
int a,b;

inline int get(char c){
	if(c=='A'||c=='B'||c=='C') return 1;
	else return 2;
}

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2) cout<<"0000";
	else{
		if((s1[0]!=s2[0])||(s1[1]!=s2[1])) cout<<"1000";
		else{
			a=get(s1[2]),b=get(s2[2]);
			if(a!=b) cout<<"1100";
			else{
				if(s1[2]=='C'&&s2[2]=='D') cout<<"1110";
				else if(s1[2]=='D'&&s2[2]=='C') cout<<"1110";
				else if(abs(int(s1[2])-int(s2[2]))==1) cout<<"1111";
				else cout<<"1110";
			}
		}
	}
	return 0;
} 

#include<bits/stdc++.h>
using namespace std;

string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2) cout<<"0000";
	else if(s1[0]!=s2[0] || s1[1]!=s2[1]) cout<<"1000";
	else{
		int a=s1[2]-'A'+1,b=s2[2]-'A'+1;
		if(a<4 && b>3) cout<<"1100";
		else if(a>3 && b<4) cout<<"1100";
		else{
			if(a==1 && b==3) cout<<"1110";
			else if(a==3 && b==1) cout<<"1110";
			else cout<<"1111";
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 

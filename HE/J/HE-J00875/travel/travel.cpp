#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;

	if(c1==c2){
		if (s1[0]==s2[0] and s1[1]==s2[1]){
			if (s1[2]=='A' or s1[2]=='B' or s1[2]=='C'){
				if (s2[2]=='A' or s2[2]=='B' or s2[2]=='C'){
					if(abs(s1[2]-s2[2])==1) cout<<1111<<'\n';
					else cout<<1110<<'\n';
				}
				else cout<<1100<<'\n';
			}
			else {
				if (s2[2]=='D' or s2[2]=='E'){
					if(abs(s1[2]-s2[2])==1) cout<<1111<<'\n';
					else cout<<1110<<'\n';
				}
				else cout<<1100<<'\n';
			}
		}
		else cout<<1000<<'\n';
	}
	else cout<<"0000"<<'\n';

	//fclose(stdin);
	//fclose(stdout);
	return 0;
}

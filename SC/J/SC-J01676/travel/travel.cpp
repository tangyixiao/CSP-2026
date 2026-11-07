#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	char c1[16],s1[16],c2[16],s2[16];
	cin>>c1>>s1>>c2>>s2;
	if((c1[0]!=c2[0])or(c1[1]!=c2[1])){
		cout<<"0000";
		return 0;
	}else{
		if((s1[0]!=s2[0])or(s1[1])!=s2[1]){
			cout<<"1000";
			return 0;
		}else{
			if(((s1[2]=='A')and(s2[2]=='B'))or((s1[2]=='A')and(s2[2]=='C'))or((s1[2]=='B')and(s2[2]=='C'))or((s1[2]=='D')and(s2[2]=='F'))or((s2[2]=='A')and(s1[2]=='B'))or((s2[2]=='A')and(s1[2]=='C'))or((s2[2]=='B')and(s1[2]=='C'))or((s2[2]=='D')and(s1[2]=='F'))){
			    if(((s1[2]=='A')and(s2[2]=='B'))or((s1[2]=='B')and(s2[2]=='A'))or((s1[2]=='B')and(s2[2]=='C'))or((s1[2]=='C')and(s2[2]=='B'))or((s1[2]=='D')and(s2[2]=='F'))or((s1[2]=='F')and(s2[2]=='D'))){
				cout<<"1111";
				return 0;
				}else{
					cout<<"1110";
					return 0;
				}            
			}else{
				cout<<"1100";
				return 0;
			}
		}
	}
	return 0;
}
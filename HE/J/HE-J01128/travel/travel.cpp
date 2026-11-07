#include <bits/stdc++.h>
using namespace std;
int main(){
	
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	int i=-1;
	while(i=3){
		if(c1==c2){
			i++;
		}
		else{
			cout<<"0000";
			break;
		}
		if(s1[0]==s2[0] && s1[1]==s2[1]){
			i++;
			if(s1[2]<='C' && s2[2]>='D'){
				cout<<"1100";
				break;
			}
			else{
				if(s1[2]=='A' && s2[2]=='B' || s1[2]=='B' && s2[2]=='C' || s1[2]=='B' && s2[2]=='A' || s1[2]=='C' && s2[2]=='B' || s1[2]=='D' && s2[2]=='F' || s1[2]=='F' && s2[2]=='D'){
					cout<<"1111";
					break;
				}
				else{
					cout<<"1110";
					break;
				}
			}
		}
		else{
			cout<<"1000";
			break;
		}
	}
	
	
	return 0;
} 

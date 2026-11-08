#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,s1;
	char c2[3],s2[3];
	cin>>c1>>c2>>s1>>s2;
	if(c1==s1){
		cout<<"1";
		if(c2[0]==s2[0] and c2[1]==s2[1]){
			cout<<"1";
			if(c2[2]>'C' and s2[2]>'C' or c2[2]<'D' and s2[2]<'D'){
				cout<<"1";
				if(c2[2]>'C'){
					if(c2[2]+2==s2[2] or c2[2]-2==s2[2]){
						cout<<"1";
					}
					else cout<<"0";
				}
				else if(c2[2]+1==s2[2] or c2[2]-1==s2[2]){
					cout<<"1";
				}
				else cout<<"0";
			}
			else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
	return 0;
}

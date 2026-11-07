#include<bits/stdc++.h>
#define int long long
using namespace std;
string c1,s1,c2,s2;
int k(char t){
	if(t=='A'||t=='B'||t=='C') return 1;
	 return 0;
}
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<"0000";
		return 0;
	}else{
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			if(k(s1[2])==k(s2[2]))
			{
				if(s1[2]-1==s2[2]||s1[2]+1==s2[2]){
					cout<<"1111";
				}
				else{
					cout<<"1110";
				}
			}else{
				cout<<"1100";
			}
		}
		else{
			cout<<"1000";
		}
	}
	return 0;
}

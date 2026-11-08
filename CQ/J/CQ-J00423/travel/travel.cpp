#include<bits/stdc++.h>
using namespace std;
string c,s,c1,s1;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c>>s>>c1>>s1;
	if(c==c1){
		if(s[0]==s1[0]&&s[1]==s1[1]){
			if((s[2]-'D'>=0&&s1[2]-'D'>=0)||(s[2]-'D'<0&&s1[2]-'D'<0)){
				if(s[2]+1==s1[2]||s[2]-1==s1[2]){
					cout<<"1111";
					return 0;
				}
				cout<<"1110";
				return 0;
			}
			cout<<"1100";
			return 0;
		}
		cout<<"1000";
		return 0;
	}
	cout<<"0000";
	return 0;
}


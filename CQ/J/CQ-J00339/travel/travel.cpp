#include<bits/stdc++.h>
using namespace std;
int n,m;
string s1,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>n>>s1>>m>>s2;
	if(n==m){
		cout<<1;
		if(s1[0]-'0'*10+s1[1]-'0'==s2[0]-'0'*10+s2[1]-'0'){
			cout<<1;
			if((s1[2]<='C'&&s1[2]>='A')&&(s2[2]<='C'&&s2[2]>='A')||((s1[2]=='D'&&s2[2]=='F')||(s1[2]=='F'&&s2[2]=='D'))){
				cout<<1;
				if(s1[2]<='C'&&s1[2]>='A'){
					if(abs((s1[2]-'0')-(s2[2]-'0'))==1){
						cout<<1;
						return 0;
					}
					else cout<<"0";
				}
				else{
					cout<<1;
					return 0;
				}
			}
			else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
	return 0;
}

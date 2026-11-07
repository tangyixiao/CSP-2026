#include<bits/stdc++.h>
using namespace std;
int c1,c2;
string s1,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1;
	cin>>s1;
	cin>>c2;
	cin>>s2;
	if(c1==c2){
		cout<<1;
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			cout<<1;
			if(int(s1[2]-'A')<3&&int(s2[2]-'A')<3||int(s1[2]-'A')>=3&&int(s2[2]-'A')>=3){
				cout<<1;
				int c=int(s1[2]-'A')-int(s2[2]-'A');
				if(c==1||c==-1)cout<<1;
				else cout<<0;
			}else cout<<0<<0;
		}else cout<<0<<0<<0;
	}else cout<<0<<0<<0<<0;
	return 0;
}

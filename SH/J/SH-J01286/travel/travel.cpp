#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	string s;
	char c1[3]={'A','B','C'},c2[2]={'E','F'};
	getline(cin,s);
	if(s[0]==s[7]&&s[1]==s[8]){
		cout<<1;
		if(s[3]==s[10]&&s[4]==s[11]){
			cout<<1;
			bool f1,f2;
			for(int i=0;i<3;i++){
				if(s[5]==c1[i])f1=1;
				if(s[12]==c1[i])f2=1;
			}for(int i=0;i<2;i++){
				if(s[5]==c2[i])f1=0;
				if(s[12]==c2[i])f2=0;
			}if(f1==f2){
				cout<<1;
				if(s[5]-s[12]==1||s[12]-s[5]==1)cout<<1;
				else cout<<0;
			}else cout<<"00";
		}else cout<<"000";
	}else cout<<"0000";
	return 0;
}

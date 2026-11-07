#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if (c1==c2){
		cout<<1;
		if (s1[0]==s2[0]&&s1[1]==s2[1]){
			cout<<1;
			int bh1=s1[2]-'A';
			int bh2=s2[2]-'A';
			if ((bh1<=2&&bh2<=2)||(bh1>2&&bh2>2)){
				cout<<1;
				if (abs(bh1-bh2)==1){
					cout<<1;
				}
				else{
					cout<<0;
				}
			}
			else{
				cout<<"00";
			}
		}
		else{
			cout<<"000";
		}
	}
	else{
		cout<<"0000";
	}
	return 0;
}

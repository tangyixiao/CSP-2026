#include<bits/stdc++.h>
using namespace std;
int c1,c2;
string s1,s2;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<"1";
		string t1 = s1.substr(0,2),t2 =s2.substr(0,2);
		char ch1 = s1[2],ch2 = s2[2];
		if(t1==t2){
			cout<<"1";
			if((ch1>='D')==(ch2>='D')){
				cout<<"1";
				if(ch1+1==ch2||ch2+1==ch1){
					cout<<1;
				}else{
					cout<<0;
				}
			}else{
				cout<<"00";
			}
		}else{
			cout<<"000";
		}
	}else{
		cout<<"0000";
	}
	return 0;
}

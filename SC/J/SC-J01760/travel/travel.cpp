#include<bits/stdc++.h>
using namespace std;
int c1,c2;
string s1,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<"1";
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			cout<<"1";
			char a=s1[2],b=s2[2];
			if((a>='A'&&a<='C'&&b>='A'&&b<='C')||(a>='D'&&a<='F'&&b>='D'&&b<='F')){
				cout<<"1";
				if(a>='A'&&a<='C'&&b>='A'&&b<='C'){
					if(abs(a-b)==1)cout<<"1";
					else cout<<"0";
				}else cout<<"1";
			}else cout<<"00";
		}else cout<<"000";
	}else cout<<"0000";
//	cout<<(c1==c2);
//	cout<<(c1==c2&&s1[0]==s2[0]&&s1[1]==s2[1]);
//	cout<<(c1==c2&&s1[0]==s2[0]&&s1[1]==s2[1]&&(s1[2]>='A'&&s1[2]<='C'&&s2[2]>='A'&&s2[2]<='C'))
	return 0;
}
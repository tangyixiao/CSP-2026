#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int pai1,pai2,t,zimu1,zimu2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(s1[2]>s2[2]){
		t=1;
	}else{
		t=0;
	}
	if(c1==c2){
		cout<<1;
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			cout<<1;
			if(((s1[2]>='A'&&s1[2]<='C')&&(s2[2]>='A'&&s2[2]<='C'))||((s1[2]>='D'&&s1[2]<='F')&&(s2[2]>='D'&&s2[2]<='F'))){
				cout<<1;
				zimu1=s1[2]-'A';
				zimu2=s2[2]-'A';
				if(t==1){
					if(zimu1-1==zimu2){
						cout<<1;
					}else{
						cout<<0;
					}
				}else{
					if(zimu2-1==zimu1){
						cout<<1;
					}else{
						cout<<0;
					}
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
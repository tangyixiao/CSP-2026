#include<bits/stdc++.h>
using namespace std;
char c1[5],s1[5],c2[5],s2[5];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	int c_1=(c1[0]-'0')*10+c1[1]-'0';
	int s_1=(s1[0]-'0')*10+s1[1]-'0';
	int c_2=(c2[0]-'0')*10+c2[1]-'0';
	int s_2=(s2[0]-'0')*10+s2[1]-'0';
	if(c_1==c_2){
		cout<<1;
		if(s_1==s_2){
			cout<<1;
			if((s1[2]>='A'&&s1[2]<='C'&&s2[2]>='A'&&s2[2]<='C')||(s1[2]>='D'&&s1[2]<='F'&&s2[2]>='D'&&s2[2]<='F')){
				cout<<1;
				if((s1[2]+1==s2[2]&&s1[2]!='C')||(s1[2]=='D'&&s2[2]=='F')){
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

#include<bits/stdc++.h>
using namespace std;
int c1,c2;
string s1,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
		int n1=(s1[0]-'0')*10+(s1[1]-'0');
		int n2=(s2[0]-'0')*10+(s2[1]-'0');  
		int q1=s1[2]-'A'+1,q2=s2[2]-'A'+1;
		if(n1==n2){
			cout<<1;
			bool fl=(q1<=3&&q2<=3||q1>3&&q2>3);
			if(fl){
				cout<<1;
				bool is=(abs(q1-q2)==1&&min(q1,q2)!=3);
				if(is)cout<<1;
				else cout<<0;
			}else cout<<"00";	
		}else cout<<"000";
	}else cout<<"0000";
	return 0; 
} 
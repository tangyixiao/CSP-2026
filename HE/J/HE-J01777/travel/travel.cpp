#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,c2,s1,s2;
	cin>>c1>>c2>>s1>>s2;
	int c,s,c3,s3;
	if(c1[0]=='0') c=c1[1]-'0';
	else c=((c1[0]-'0')*10)+c1[1]-'0';
	if(s1[0]=='0') s=s1[1]-'0';
	else s=((s1[0]-'0')*10)+s1[1]-'0';
	if(c2[2]=='A'||'B'||'C'){
		c3==1;
	}
	else c3==0;
	if(s2[2]=='A'||'B'||'C'){
		s3==1;
	}
	else s3==0;
	if(c-s==0){
		cout<<1<<" ";
		if(c2[0]==s2[0]){
			if(c2[1]==s2[1]){
				cout<<1<<" ";
				if(s3==c3){
					cout<<1<<" ";
					if((c2[2]-s2[2]==1)||(s2[2]-c2[2]==1)){
						cout<<1;			
					}
					else cout<<0;
				}
				else cout<<0<<" "<<0;
			}
			else cout<<0<<" "<<0<<" "<<0;
		}
	}
	else cout<<0<<" "<<0<<" "<<0<<" "<<0;
	return 0;
}

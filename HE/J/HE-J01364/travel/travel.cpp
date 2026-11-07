#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	int a=0,b,c;
	cin>>c1>>s1>>c2>>s2;
	b=s1[2]-'A';
	c=s2[2]-'A';
	for(int i=0;i<2;i++){
		if(s1[i]!=s2[i]){
			cout<<000;
			a=1;
			break;
		}
	}
	if(c1==c2){
		cout<<1;
		if(a==0){
			cout<<1;
			if(((b>=0&&b<=2)&&(c>=0&&c<=2))||((b==3&&b==5)&&(c==3&&c==5))){
				cout<<1;
				if((b!=0&&c!=2)||(c!=0&&b!=2)){
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

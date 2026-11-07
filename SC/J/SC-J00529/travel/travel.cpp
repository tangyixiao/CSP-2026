#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a1,s1,a2,s2;
	cin>>a1>>s1>>a2>>s2;
	if(a1==a2){
		//cout<<1;
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			//cout<<1;
			char p=s1[2],q=s2[2];
			if(((p=='A'||p=='B'||p=='C')&&(q=='A'||q=='B'||q=='C'))||((p=='D'||p=='F')&&(q=='D'||q=='F'))){
				//cout<<1;
				if(char(p+1)==char(q)||char(q+1)==char(p)){
					cout<<"1111";
				}
				else{
					cout<<"1110";
				}
			}
			else{
				cout<<"1100";
			}
		}
		else{
			cout<<"1000";
		}
	}
	else{
		cout<<"0000";
	}
	return 0;
}
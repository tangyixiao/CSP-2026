#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int c1,c2;
	string s1,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<"1";
		int t1=(s1[0]-'0')*10+s1[1]-'0';
		int t2=(s2[0]-'0')*10+s2[1]-'0';
		if(t1==t2){
			cout<<"1";
			char x1=s1[2];
			char x2=s2[2];
			if((x1=='A'||(x1=='B'||x1=='C'))&&(x2=='A'||(x2=='B'||x2=='C'))){
				cout<<"1";
				if(((x1=='A'&&x2=='B')||((x1=='B'&&x2=='C')||(x1=='D'&&x2=='F')))||(x2=='A'&&x1=='B')||((x2=='B'&&x1=='C')||(x2=='D'&&x1=='F'))){
					cout<<"1";
				}
				else cout<<"0";
			}
			else cout<<"00";
 		}
		else cout<<"000";
	} 
	else cout<<"0000";
	return 0;
} 

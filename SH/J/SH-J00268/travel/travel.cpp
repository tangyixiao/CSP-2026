#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
		int a=(s1[0]-'0')*10+s1[1]-'0';
		int b=(s2[0]-'0')*10+s2[1]-'0';
		int c=s1[2]-'A';
		int d=s2[2]-'A';
		if(s1[2]=='F')c--;
		if(s2[2]=='F')d--;
		if(a==b){
			cout<<1;
			if((c<3&&d<3)||(c>=3&&d>=3)){
				cout<<1;
				if((c==d+1&&c!=3)||(d==c+1&&d!=3)){
					cout<<1;
				}
				else cout<<0;
			}
			else cout<<"00";
		}
		else{
			cout<<"000";
		}
	}
	else{
		cout<<"0000"<<endl;
	}
	return 0;
} 
/*
si lu:an ti mu mo ni 
*/ 

#include<bits/stdc++.h>
using namespace std;

string c1,s1,c2,s2;
string s="ABCDF";
bool f=true;
int a,b;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		for(int i=0;i<=s.size();i++){
			if(s1[2]==s[i]) a=i+1;
			if(s2[2]==s[i]) b=i+1; 
		}
		cout<<'1';
		for(int i=0;i<2;i++){
		if(s1[i]!=s2[i]){
				f=false;
				break;
			}
		}
		if(f){
			cout<<'1';
			if((a<4&&b<4)||(a>3&&b>3)){
				cout<<'1';
				if(a-b==1||b-a==1) cout<<'1';
				else cout<<"0";
			}
			else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
	return 0;
}
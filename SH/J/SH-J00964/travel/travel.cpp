#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
bool isxl(char x,char y){
	if(x<y)return y-x==1;
	else return x-y==1;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2)cout<<"0000";
	else{
		cout<<'1';
		string a=s1.substr(0,2);
		string b=s2.substr(0,2);
		if(a!=b)cout<<"000";
		else{
			cout<<'1';
			char c=s1[2];
			char d=s2[2];
			if(!(('A'<=c&&c<='C')&&('A'<=d&&d<='C'))||(('D'<=c&&c<='F')&&('D'<=d&&d<='F')))cout<<"00";
			else{
				cout<<'1';
				if(!isxl(c,d))cout<<'0';
				else cout<<'1';
			}
		}
	}
	return 0;
}

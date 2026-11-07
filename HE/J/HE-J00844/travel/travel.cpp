#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
		string a=s1.substr(0,2),b=s2.substr(0,2);
		if(a==b){
			cout<<1;
			string x=s1.substr(2),y=s2.substr(2);
			if( (x=="A"&&y=="B" || x=="B"&&y=="A" || x=="B"&&y=="C" || x=="C"&&y=="B" || x=="A"&&y=="C" || x=="C"&&y=="A") || (x=="D"&&y=="F" || x=="F"&&y=="D")){
				cout<<1;
				if(x=="A"&&y=="B" || x=="B"&&y=="A" || x=="B"&&y=="C" || x=="C"&&y=="B" || x=="D"&&y=="F" || x=="F"&&y=="D")
					cout<<1;
				else cout<<"0";
			}else
				cout<<"00";
		}else
			cout<<"000";
	}else
		cout<<"0000";
	return 0;
} 

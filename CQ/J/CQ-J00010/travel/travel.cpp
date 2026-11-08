#include<bits/stdc++.h>
using namespace std;
int a1,b1;
string a2,b2;
int main(){
	freopen("travel.in.txt","r",stdin);
	freopen("travel.txt","w",stdout);
	cin>>a1>>a2>>b1>>b2;
	//cout<<a2<<" "<<b2<<endl;
	if(a1!=b1){
		cout<<"0 0 0 0";
	}
	else{
		cout<<"1 ";
		if(!(a2[0]==b2[0]&&a2[1]==b2[1])) cout<<"0 0 0";
		else{
			cout<<"1 ";
			char a=a2[2],b=b2[2];
			if(!((a>='D'&&b>='D')||(a<='C'&&b<='C'))) cout<<"0 0";
			else{
				cout<<"1 ";
				if((a=='A'&&b=='C')||(a=='C'&&b=='A')) cout<<0;
				else cout<<1;
			}
		}
	}
	return 0;
} 

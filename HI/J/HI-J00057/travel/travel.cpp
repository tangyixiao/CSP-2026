#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin); 
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	//cout<<c1<<" "<<s1<<" "<<c2<<" "<<s2;
	if(c1==c2){
		cout<<"1";
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			cout<<"1";
			bool f=false;
			if(s1[2]>='A'&&s1[2]<='C'&&s2[2]<='C'&&s2[2]>='A'){
				cout<<"1";
				f=true;
			}else if(s1[2]>='D'&&s1[2]<='F'&&s2[2]<='F'&&s2[2]<='D'){
				cout<<"1";
				f=true;
			}
			if(!f){
				cout<<"00";//02 01A 02 01B
			}else{
				bool b=true;
				if(b&&s1[2]=='D'&&s2[2]=='F'){
					cout<<"1";
					b=false;
				}
				if(b&&s1[2]=='F'&&s2[2]=='D'){
					cout<<"1";
					b=false;
				}
				if(b&&s1[2]=='A'&&s2[2]=='B'){
					cout<<"1";
					b=false;
				}
				if(b&&s1[2]=='B'&&s2[2]=='A'){
					cout<<"1";
					b=false;
				}
				if(b&&s1[2]=='B'&&s2[2]=='C'){
					cout<<"1";
					b=false;
				}
				if(b&&s1[2]=='C'&&s2[2]=='B'){
					cout<<"1";
					b=false;
				}
				if(b){
					cout<<"0";
				}
			}
		}else{
			cout<<"000";
		}
	}else{
		cout<<"0000";
	}
	return 0;
}

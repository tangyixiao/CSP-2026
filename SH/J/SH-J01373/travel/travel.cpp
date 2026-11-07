#include<bits/stdc++.h>
using namespace std;
string s1,s2,s3,s4;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s1>>s2>>s3>>s4;
	if(s1!=s3){
		cout<<"0000";
	}
	else{
		cout<<"1";
		bool flag=1;
		for(int i=0;i<2;i++){
			if(s2[i]!=s4[i]){
				cout<<"000";
				flag=0;
			}
		}
		if(flag){
			cout<<"1";
			char c1=s2[2],c2=s4[2];
			if((c1<='C'&&c2<='C')||(c1>='D'&&c2>='D')){
				cout<<"1";
				if(c1>c2){
					swap(c1,c2);
				}
				if((c1=='A'&&c2=='B')||(c1=='B'&&c2=='C')||(c1=='D'&&c2=='F')){
					cout<<"1";
				}
				else{
					cout<<"0";
				}
			}
			else{
				cout<<"00";
			}
		}
	}
	return 0;
}


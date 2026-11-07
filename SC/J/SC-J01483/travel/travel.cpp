#include <bits/stdc++.h> 
using namespace std;

int main(){
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	int n1,n2;
	n1=s1[2]-'A';
	n2=s2[2]-'A';
	if(c1==c2){
		cout<<1;
	}else{
		cout<<0;
	}
	if(c1==c2){
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			cout<<1;
		}else{
			cout<<0;
		}
	}else{
		cout<<0;
	}
	if(c1==c2){
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			if(n1<3&&n2<3){
				cout<<1;
			}else if(n1>=3&&n2>=3){
				cout<<1;
			}else{
				cout<<0;
			}
		}else{
			cout<<0;
		}
	}else{
		cout<<0;
	}
	if(c1==c2){
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			if(n1<3&&n2<3){
				if(abs(n1-n2)==1){
					cout<<1;
				}else{
					cout<<0;
				}
			}else if(n1>=3&&n2>=3){
				if(abs(n1-n2)==1){
					cout<<1;
				}else{
					cout<<0;
				}
			}else{
				cout<<0;
			}
		}else{
			cout<<0;
		}
	}else{
		cout<<0;
	}
	return 0;
}
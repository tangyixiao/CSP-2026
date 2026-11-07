#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
void print(int a,int b){
	for(int i=1;i<=b;i++) cout<<a;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		print(0,4);
	}else{
		cout<<1;
	//	string s3 = s1[0]+s1[1],s4 = s2[0]+s2[1];
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			cout<<1;
			char a = s1[2],b = s2[2];
			if(a>='D'&&b<='C'||a<='C'&&b>='D'){
				print(0,2);
				
			}else{
				cout<<1;
				if(a=='C'&&b=='D'||b=='C'&&a=='D'){
					cout<<0;
				}else if(abs(a-b)==1){
					cout<<1;
				}else{
					cout<<0;
				}
			}
		}else{
			print(0,3);
		}
	}
	return 0;
}
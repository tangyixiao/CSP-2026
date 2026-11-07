#include <bits/stdc++.h>
using namespace std;
int c1,c2;
string s1,s2;
char a[10],b[10];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<"1";
		for(int i=0;i<=s1.size();i++){
			a[i]=s1[i];
			b[i]=s2[i];
		}
		int sum=0;
		for(int i=0;i<2;i++){
			if(a[i]!=b[i]){
				cout<<"000";
				return 0;
			}else{
			    sum++;	
			}
			if(sum==2){
				cout<<"1";
			}
		}
		if(a[2]>='A'&&a[2]<='C'&&b[2]>='A'&&b[2]<='C'){
				cout<<"1";
				if(a[2]=='B'||b[2]=='B'){
					cout<<"1";
					return 0;
				}else{
					cout<<"0";
					return 0;
				}
			}else if(a[2]>='D'&&a[2]<='F'&&b[2]>='D'&&b[2]<='F'){
				cout<<"11";
				return 0;
			}else{
				cout<<"00";
				return 0;
			}
	}else{
		cout<<"0000";
		return 0;
	}
	return 0;
}
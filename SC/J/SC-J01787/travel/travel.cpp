#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout); 
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	int x=stoi(c1),r=stoi(c2);
	if (x!=r){
		cout<<"0000";
	}else{
		cout<<1;
		int a=(s1[0]-'0')*10+(s1[1]-'0');
		int b=(s2[0]-'0')*10+(s2[1]-'0');
		if (a!=b){
			cout<<"000";
		}else {
			cout<<1;
			int c=int(s1[2])-'A'+1;
			int d=int(s2[2])-'A'+1;
			int f=c*d;
			if (f==2||f==6||f==20){
				cout<<11;
			}else if (f==3){
				cout<<10;
			}else{
				cout<<"00";
			}
		}
		
	}
	return 0; 
}
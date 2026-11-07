#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s1,s2,c1,c2;
	cin>>s1>>s2>>c1>>c2;
	int f1=0,f2=0,f3=0,f4=0;
	if(s1==c1){
		f1=1;
		if(s2[0]==c2[0]&&s2[1]==c2[1]){
			f2=1;
			if((s2[2]>='D'&&c2[2]>='D')||(s2[2]<='C'&&c2[2]<='C')){
				f3=1;
				if(s2[2]>='D'&&c2[2]>='D')f4=1;
				else if(s2[2]=='A'&&c2[2]=='B')f4=1;
				else if(s2[2]=='B'&&c2[2]=='C')f4=1;
				else if(s2[2]=='B'&&c2[2]=='A')f4=1;
				else if(s2[2]=='C'&&c2[2]=='B')f4=1;
			}
		}
	}
	cout<<f1<<f2<<f3<<f4;
	return 0;
}

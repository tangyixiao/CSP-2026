#include <bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2;
int main(){
 	freopen("travel.in","r",stdin);
 	freopen("travel.out","w",stdout);
 	cin>>c1>>s1>>c2>>s2;
 	if(c1==c2)cout<<1;
 	else{
 		cout<<0;cout<<0;cout<<0;cout<<0;
 		return 0;
	}
 	s1=' '+s1;s2=' '+s2;
 	if(s1[1]==s2[1]&&s1[2]==s2[2]){
 		cout<<1;
	}
	else{
		cout<<0;cout<<0;cout<<0;
		return 0; 
	}
 	int f1=1,f2=1;
 	if(s1[3]=='D'||s1[3]=='F')f1=2;
 	if(s2[3]=='D'||s2[3]=='F')f2=2;
 	if(f1==f2){
 		cout<<1;
 		if(f1==2&&f2==2)cout<<1;
 		else{
 			int i=s1[3]-'A',j=s2[3]-'A';
 			if(i-j<=1&&i-j>=-1)cout<<1;
 			else cout<<0;
		}
	}
 	else{
 		cout<<0;
 		cout<<0;
	}
 	return 0;
}

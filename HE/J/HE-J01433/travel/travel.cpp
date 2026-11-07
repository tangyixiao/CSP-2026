#include<bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin.tie(0);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		printf("%d",1);
		if((s1[1]==s2[1]) and (s1[0]==s1[0])){
			printf("%d",1);
			if((s2[2]<='C' and s1[2]<='C') or (s1[2]>='D' and s2[2]>='D')){
				printf("%d",1);
				if((s1[2]=='C' and s2[2]=='D') or (s1[2]=='D' and s2[2]=='C'))cout<<"0"<<endl;
				else if((s1[2]+1==s2[2])or(s1[2]==s2[2]+1))printf("%d",1);
				else cout<<"0"<<endl;
			}
			else cout<<"00"<<endl;
		}
		else cout<<"000"<<endl;
	}
	else cout<<"0000"<<endl;
	return 0;
}

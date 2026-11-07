#include<bits/stdc++.h>
using namespace std;
int c1,c2,s1,s2;
char s_1,s_2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>s_1>>c2>>s2>>s_2;
	int a=min(s_1-'A',4),b=min(s_2-'A',4);
	if(c1==c2){
		cout<<1;
		if(s1==s2){
			cout<<1;
			if((a<3 and b<3) or (a>=3 and b>=3)){
				cout<<1;
				if(abs(a-b)==1) cout<<1;
				else cout<<"0";
			}
			else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
	return 0;
}

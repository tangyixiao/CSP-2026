#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s1,s2,c1,c2;
	cin>>c1>>s1>>c2>>s2;
	long long a,b;
	a=s1[2]-'A'+1;
	b=s2[2]-'A'+1;
	if(c1==c2){
		cout<<1;
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			cout<<1;
			if((a<=3&&b<=3)||(a>3&&b>3)){
				cout<<1;
				if(abs(a-b)==1)cout<<1;
				else cout<<0;
			}
			else cout<<0<<0;
		}
		else cout<<0<<0<<0;
	}
	else {
		cout<<0<<0<<0<<0;
	}
	return 0;
	fclose(stdin);
	fclose(stdout);
} 
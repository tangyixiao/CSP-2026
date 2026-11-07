#include<bits/stdc++.h>
using namespace std;
using ll=long long;
bool d[5]={0,0,0,1,1};
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) {
		cout<<1;
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			cout<<1;
			if(d[s1[2]-'A']==d[s2[2]-'A']){
				cout<<1;
				if(abs(s1[2]-s2[2])==1){
					cout<<1;
				}else{
					cout<<0;
				}
			}else{
				cout<<0;
				cout<<0;
			}
		}else{
			for(ll i=1;i<=3;i++) cout<<0;
		}
	}else{
		for(ll i=1;i<=4;i++) cout<<0;
	}
	
	
	return 0;
}
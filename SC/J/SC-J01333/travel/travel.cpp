#include<bits/stdc++.h>
using namespace std;
string ans;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		int r1,r2;
		r1=(s1[0]-'0')*10+(s1[1]-'0');
		r2=(s2[0]-'0')*10+(s2[1]-'0');
		if(r1==r2){
			char w1,w2;
			w1=s1[2];
			w2=s2[2];
			if(w1>w2){
				swap(w1,w2);
			}
			if((w1=='A' && w2=='B') || (w1=='B' && w2=='C') || (w1=='D' && w2=='F')){
				ans="1111";
			}
			else if(w1=='A' || w2=='C'){
				ans="1110";
			}
			else{
				ans="1100";
			}
		}
		else{
			ans="1000";
		}
	}
	else{
		ans="0000";
	}
	cout<<ans;
	return 0;
}
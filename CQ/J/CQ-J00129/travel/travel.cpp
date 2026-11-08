#include<bits/stdc++.h>
//#define int long long
using namespace std;
string c1,s1,c2,s2,ans="0000"; 
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		ans="1000";
		string p1="",p2="";
		p1+=s1[0]+s1[1],p2+=s2[0]+s2[1];
		if(p1==p2){
			ans="1100";
			char w1=s1[2],w2=s2[2];
			if('A'<=w1&&w1<='C'&&'A'<=w2&&w2<='C'){
				ans="1110";
				if(abs(w1-w2)==1)ans="1111"; 
			}
			if(w1=='D'&&w2=='F'||w1=='F'&&w2=='D'){
				ans="1111";
			}
		}
	}
	cout<<ans;
	return 0;
}


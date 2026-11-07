#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string n1,n2,s1,s2;
	cin>>n1>>s1>>n2>>s2;
	bitset<4> ans;
	if(n1==n2){	
		ans[3]=1;
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			ans[2]=1;
			if(!((s1[2]<'D')^(s2[2]<'D'))){
				ans[1]=1;
				if((s1[2]=='D'&&s2[2]=='F')||
					(s1[2]=='F'&&s2[2]=='D')||
					(s1[2]=='A'&&s2[2]=='B')||
					(s1[2]=='B'&&s2[2]=='A')||
					(s1[2]=='B'&&s2[2]=='C')||
					(s1[2]=='C'&&s2[2]=='B')){
					ans[0]=1;
				}
			}
		}
	}
	cout<<ans;
}
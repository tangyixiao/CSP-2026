#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2,cnt1,cnt2,ans="";
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		ans=ans+"1";
		cnt1=s1[0]+s1[1];
		cnt2=s2[0]+s2[1];
		if(cnt1==cnt2){
			ans=ans+"1";
			int top1=s1[2]-'A',top2=s2[2]-'A';
			bool op=0;
			if(top1<3&&top2<3)op=1;
			if(top1>=3&&top2>=3)op=1;
			if(op==0){
				ans=ans+"00";
			}
			else {
				ans=ans+"1";
				if(abs(top1-top2)==1)ans=ans+"1";
				else ans=ans+"0"; 
			}
		}
		else {
			ans=ans+"000";
		}
	}
	else{
		ans="0000";
	}
	cout<<ans;
	return 0;
}

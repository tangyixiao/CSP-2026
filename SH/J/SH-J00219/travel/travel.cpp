#include<bits/stdc++.h>
using namespace std;
bool ch(char t1,char t2,char a,char b){
	if(t1>=a && t1<=b && t2>=a && t2<=b)return 1;
	return 0;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	string ans="";
	string t1=s1,t2=s2;
	char t3=s1[2],t4=s2[2];
	t1.erase(2,1);
	t2.erase(2,1);
	if(c1==c2){
		ans+="1";
		if(t1==t2){
			ans+="1";
			if(ch(t3,t4,'A','C') || ch(t3,t4,'D','F')){
				ans+="1";
				if(t3=='A' && t4=='B' || t3=='B' && t4=='C' || t3=='D' && t4=='F')ans+="1";
				else ans+="0"; 
			}
			else ans+="00";
		}
		else ans+="000";
	}
	else ans+="0000";
	
	
	
	cout<<ans;
	return 0;
}

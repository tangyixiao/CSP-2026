#include <bits/stdc++.h>
using namespace std;
int cnt=0;
int main()
{
	//freopen("travel.in","r",stdin);
	//freopen("travel.out","w",stdout);
	string c1,s1,c2,s2,s="";
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		s+="1"; 
	}
	else{
		s+="0";
	}
	
	for(int i=0;i<=1;i++){
		if(s1[i]==s2[i]) cnt++;	 		
	}
	if(cnt==2) s+="1";
	else s+="0"; 
	cout<<s;
	return 0;
}

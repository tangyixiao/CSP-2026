#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	freopen("travel.in","r",stdio); 
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) cout<<1;
	else{
		cout<<"0000";
		return 0; 
	}
	string x1="",x2="",y1="",y2="";
	x1+=s1[0];x1+=+s1[1];x2+=s2[0];x2+=s2[1];y1+=s1[2];y2+=s2[2];
	if(x1==x2) cout<<1;
	else{
		cout<<"000";
		return 0;
	}
	if((y1=="A" || y1=="B" || y1=="C") && (y2=="A" || y2=="B" || y2=="C")) cout<<1;
	else if((y1=="D" || y1=="F") && (y2=="D" || y2=="F")) cout<<1;
	else{
		cout<<"00";
		return 0;
	}
	if(y1=="D" || y1=="F") cout<<1;
	else if((y1=="A" || y1=="B") && (y2=="A" || y2=="B") || (y1=="C" || y1=="B") && (y2=="C" || y2=="B")) cout<<1;
	else cout<<0;
	return 0;
} 
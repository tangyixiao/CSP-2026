#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
//  freopen("traveltest.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	cout<<(c1==c2)<<(c1==c2 and (""+s1[0]+s1[1])==(""+s2[0]+s2[1]))<<(c1==c2 and (""+s1[0]+s1[1])==(""+s2[0]+s2[1]) and (s1[2]<'D' and s2[2]<'D' or s1[2]>'D' and s2[2]>'D'))<<(c1==c2 and (""+s1[0]+s1[1])==(""+s2[0]+s2[1]) and (s1[2]<'D' and s2[2]<'D' or s1[2]>'D' and s2[2]>'D') and abs(s1[2]-s2[2])==1);
	return 0;
} 

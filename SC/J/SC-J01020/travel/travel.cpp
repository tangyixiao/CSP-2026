#include<bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2;
bool x=0,y=0,z=0;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<"0000";
		return 0;
	}
	
	string line_s1=s1.substr(0,2),end_s1=s1.substr(2,2);
	string line_s2=s2.substr(0,2),end_s2=s2.substr(2,2);
	if(end_s1=="F") end_s1="E";
	if(end_s2=="F") end_s1="E";
	int line1=int(line_s1[0]-48)*10+int(line_s1[1]-48),end1=int(end_s1[0])-65+1;
	int line2=int(line_s2[0]-48)*10+int(line_s2[1]-48),end2=int(end_s2[0])-65+1;
	if(line1==line2){
		x=1;
		if((end1<=3 && end2<=3) || (end1>=4 && end2>=4)){
			y=1;
			if(abs(end1-end2)==1) z=1;
		}
	}
	cout<<1<<x<<y<<z;
	
	
	return 0;
}
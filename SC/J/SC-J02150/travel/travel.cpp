#include<bits/stdc++.h>
//#define int long long
//#define pi pair<int,int>
using namespace std;
string c1,s1,c2,s2,t1,t2;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<"0000";
		return 0;
	}
	for(int i=0;i<s1.size()-1;i++) t1+=s1[i];
	for(int i=0;i<s2.size()-1;i++) t2+=s2[i];
	if(t1!=t2){
		cout<<"1000";
		return 0;
	}
	int r=abs(s1[2]-s2[2]);
	if((s1[2]<='C'&&s2[2]<='C')||(s1[2]>='D'&&s2[2]>='D')){
		if(r==1)cout<<"1111";
		else cout<<"1110";
	}
	else cout<<"1100";
	return 0;
}
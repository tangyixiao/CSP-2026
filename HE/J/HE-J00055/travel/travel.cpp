#include<bits/stdc++.h>
using namespace std;
#define ll long long
string c1,s1,c2,s2;
int o1,o2,o3,o4;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	int sz=s1.size()-1;
	if(c1==c2){//同一车 
		o1=1;
		if(s1[0]==s2[0]&&s1[1]==s2[1]){//同一排 
			o2=1;
			if((('A'<=s1[sz]&&s1[sz]<='C')&&('A'<=s2[sz]&&s2[sz]<='C'))||(('D'<=s1[sz]&&s1[sz]<='F')&&('D'<=s2[sz]&&s2[sz]<='F'))){//同一侧 
				o3=1;
				if(s1[sz]+1==s2[sz]||s1[sz]-1==s2[sz]||((s1[sz]=='D'&&s2[sz]=='F')||(s1[sz]=='F'&&s2[sz]=='D'))/*DF能在一块啊*/){//相邻
					o4=1;
				}
			}
		} 
	}
	cout<<o1<<o2<<o3<<o4;
	return 0;
} 

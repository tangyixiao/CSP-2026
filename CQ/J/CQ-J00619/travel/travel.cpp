#include<bits/stdc++.h>
//#define int long long
//#define double long double
#pragma GCC optimize(2)
#pragma GCC optimize(3)
#pragma GCC optimize("Ofast")
using namespace std;
int c1,c2;
string s1,s2; //c:小R,c1->车厢,s1->座位号 
string ans;
long long len1,len2;
string hanshu(int c1,string s1,int c2,string s2){
	string as="";
	if(c1!=c2) as="0000";
	else{
		//第一位为一
		//int pai1,pai2/*第几排*/;
		//pai1=s1[0]*10+s1[1];
		//pai2=s2[0]*10+s2[2];
		//if(pai1!=pai2) as="1000";
		if((s1[0]!=s2[0])||(s1[1]!=s2[1])) as="1000";
		else{
			//第二位为一
			if((s1[2]=='A'||s1[2]=='B'||s1[2]=='C')&&(s2[2]=='D'||s2[2]=='F')) as="1100";
			else if((s2[2]=='A'||s2[2]=='B'||s2[2]=='C')&&(s1[2]=='D'||s1[2]=='F')) as="1100";
			else{
				//第三位为一
				if((s1[2]=='A'&&s2[2]=='C')||(s2[2]=='A'&&s1[2]=='C')) as="1110";
				else as="1111";
			}
		}
	}
	return as;
}
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	len1=s1.size(),len2=s2.size();
	ans=hanshu(c1,s1,c2,s2);
	cout<<ans<<'\n';
	return 0;
}

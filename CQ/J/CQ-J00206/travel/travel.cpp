#include<bits/stdc++.h>
using namespace std;
typedef int intt;
#define int long long
int a[205];
string c1,s1,c2,s2;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	cin>>c1>>s1>>c2>>s2;
	a['A']=a['B']=a['C']=1;
	a['D']=a['F']=2;
	if(c1!=c2)cout<<"0000";
	else{
		cout<<"1";
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			cout<<"1";
			if(a[s1[2]]==a[s2[2]]){
				cout<<"1";
				if(s1[2]==s2[2]+1||s2[2]==s1[2]+1)cout<<"1";
				else cout<<"0";
			}
			else cout<<"00";
		}
		else cout<<"000";
	}
	return 0;
} 







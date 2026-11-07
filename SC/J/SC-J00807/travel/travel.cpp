#include<bits/stdc++.h>
using namespace std;
int c1,c2,a1,a2;
string s1,s2;
vector<int>ans(4,0);
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		ans[0]=1;
		a1=(s1[0]-'0')*10+(s1[1]-'0'),a2=(s2[0]-'0')*10+(s2[1]-'0');
		c1=s1[2],c2=s2[2];
		if(a1==a2){
			ans[1]=1;
			if((c1<='C'&&c2<='C')||(c1>'C'&&c2>'C')){
				ans[2]=1;
				if(c1-c2==1||c1-c2==-1) ans[3]=1;
			}
		}
	}
	for(int i:ans) cout<<i;
	return 0;
}
#include<bits/stdc++.h>
#define int long long
using namespace std;
int a,b;
string c1,c2,s1,s2;
char q,p;
signed main(){
	freopen("travel.in","r",stdin);freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2)cout<<"0000";
	else{
		cout<<1;
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			cout<<1;q=s1[2];p=s2[2];
			if(q=='A'){
				if(p=='B')cout<<11;
				else if(p=='C')cout<<10;
				else cout<<"00";
			}else if(q=='B'){
				if(p=='A')cout<<11;
				else if(p=='C')cout<<11;
				else cout<<"00";
			}else if(q=='C'){
				if(p=='B')cout<<11;
				else if(p=='A')cout<<10;
				else cout<<"00";
			}else if(q=='D'){
				if(p=='F')cout<<11;
				else cout<<"00";
			}else{
				if(p=='D')cout<<11;
				else cout<<"00";
			}
		}else cout<<"000";
	}return 0;
}
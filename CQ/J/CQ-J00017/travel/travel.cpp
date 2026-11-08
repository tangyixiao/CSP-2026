#include<bits/stdc++.h>
using namespace std;
#define int long long
string c,d,c2,d2;
int vis[1005];
bool check(char a,char b){
	return vis[a-'A']==vis[b-'A'];
}

bool check2(char a,char b){
	if(vis[a-'A']+vis[b-'A']==4)return 1;
	if(a>b)swap(a,b);
	if(a=='A'&&b=='B')return 1;
	else if(a=='B'&&b=='C')return 1;
	else return 0;
}
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>c>>d>>c2>>d2;
	vis[0]=vis[1]=vis[2]=1;
	vis[3]=vis[5]=2;
	if(c==c2){
		cout<<1;
		if(d[0]==d2[0]&&d[1]==d2[1]){
			cout<<1;
			if(check(d[2],d2[2])){
				cout<<1;
				if(check2(d[2],d2[2]))cout<<1;
				else cout<<0;
			}else cout<<"00";
		}else cout<<"000";
	}else cout<<"0000";
	return 0;
}


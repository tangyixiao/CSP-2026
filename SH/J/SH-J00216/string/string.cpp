#include<bits/stdc++.h>
using namespace std;
#define int long long

string s;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;cin>>n;int ans=0;
	s+=' ';
	for(int i=1;i<=n;i++){
		int x;char y;
		scanf("%lld %c",&x,&y);ans+=x;
		for(int j=1;j<=x;j++){
			s=s+y;
		}
	}
	string sz,sy;
	for(int i=1;i<=ans/2;i++){
		sz=sz+s[i];
	}//cout<<sz<<endl;
	if(ans%2==0){
		for(int i=ans/2+1;i<=ans;i++){
			sy=sy+s[i];
		}
	}//cout<<sy<<endl;
	if(ans%2==1){
		for(int i=ans/2+2;i<=ans;i++){
			sy=sy+s[i];
		}		
	}//cout<<sy<<endl;
	int cnt1=0;int cnt2=sy.size()-1;int ans1=0;
	//cout<<sz[1]<<" "<<sy[1]<<endl;
	for(int i=1;i<=ans/2;i++){
		//cout<<sz[cnt1]<<" "<<sy[cnt2]<<endl;
		if(sz[cnt1]!=sy[cnt2]) ans1++;
		cnt1++;cnt2--;
	}cout<<ans1;
	
}

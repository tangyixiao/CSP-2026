#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2,x1,x2;
	char t1,t2;
	cin>>c1>>x1>>t1>>c2>>x2>>t2;
	if(c1==c2) cout<<1;
	else cout<<0;
	
	if(x1==x2&&c1==c2) cout<<1;
	else cout<<0;
	
	if(x1==x2&&c1==c2){
		int y1=t1,y2=t2;
		if(y1<=67&&y2<=67) cout<<1;
		else if(t1>67&&t2>67) cout<<1;
		else cout<<0;
	}else cout<<0;
	
	if(c1==c2){
		if(x1==x2){
			int y1=t1,y2=t2;
			if(y1<=67&&y2<=67){
				if(y1+1==y2||y1-1==y2) cout<<1;
				else cout<<0;
			}else if(t1>67&&t2>67){
				if(y1+1==y2||y1-1==y2) cout<<1;
				else cout<<0;
			}else cout<<0; 
		}else cout<<0;
	}else cout<<0; 
	return 0;
}

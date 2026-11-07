#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+10;
int n,m;
int a[N],dp[N];
int yu(int x,int y){
	
	string x1="",y1="";
	while(x){
		if(x&1){
			x1+='1';
			x>>=1;
		} 
		else{
			x1+='0';
			x>>=1;
		} 
	}
	int xx=x1.size();
	
    while(y){
		if(y&1){
			y1+='1';
			y>>=1;
		} 
		else{
			y1+='0';
		    y>>=1;
		} 
	}
	int yy=y1.size();
	
    string t1;
	int ss=min(xx,yy);
	for(int i=0;i<ss;i++){
		if(x1[i]=='1'&&y1[i]=='1'){
			t1+='1';
		}
		else t1+='0';
	}
	for(int i=ss-1;i>=0;i--){
		if(t1[i]=='0') ss--;
	}
	int t=0;
	for(int i=ss;i>=0;i--){
		if(t1[i]=='1') t=t*2+1;
		else t=t*2;
	}
	return t;
}
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}

    if(m==1){
    	int ma=INT_MIN;
    	for(int i=1;i<=n;i++) ma=max(ma,a[i]);
    	cout<<ma;
    	return 0;
	}
	else if(m==n){
		int ans=a[1];
		for(int i=2;i<=n;i++){
			ans=yu(ans,a[i]);
		}
		cout<<ans;
		return 0;
	}
	else if(m==2){
		int ans=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i!=j){
					ans=max(ans,yu(a[i],a[j]));
				}
			}
		}
		cout<<ans;
		return 0;
	}
	memset(dp,0,sizeof dp);
	for(int i=1;i<=n;i++){
		for(int j=m;j>=1;j--){
			if(i==1){
				dp[j]=0;
			}
			else if(i==2) dp[j]=max(dp[j-1],yu(a[i],a[i-1]));
			else dp[j]=max(dp[j-1],yu(dp[j-1],a[i]));
			
		}
	}
	
		cout<<dp[m];
	
	return 0;
}

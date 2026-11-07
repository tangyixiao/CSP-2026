#include<bits/stdc++.h>
using namespace std;
long long a[200500];
char c[200500];
char dp[100060];
long long n,ans;
long long cnt;
int main(){
	//freopen("string.in","r",stdin);
	//freopen("string.out","w",stdout);	
	cin>>n;
	if(n<=2000){
		int muk=0;
		for(int i=1;i<=n;i++){
			cin>>a[i]>>c[i];
			for(int j=muk+1;j<=muk+1+a[i];j++)dp[j]=c[i];
			muk+=a[i];
		}
		for(int i=1;i<=muk/2;i++){
			if(dp[i]!=dp[muk-i+1])ans++;
		}
		cout<<ans;
		return 0;
	}
	int mark2=1;
	stack<pair<long long,char>> q;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		if(a[i]!=1)mark2=0;
		cnt+=a[i];
	}
	if(mark2){
		int muk=0;
		for(int i=1;i<=n;i++){
			for(int j=muk+1;j<=muk+1+a[i];j++)dp[j]=c[i];
			muk+=a[i];
		}
		for(int i=1;i<=muk/2;i++){
			if(dp[i]!=dp[muk-i+1])ans++;
		}
		cout<<ans;
		return 0;
	}
	int muk=0;
	for(int i=1;i<=n;i++){
		if(muk+a[i]<=cnt/2)q.push({a[i],c[i]});
		else if(muk>cnt/2){
			while(a[i]>0){
				int x=q.top().first;
				char y=q.top().second;
				if(x<=a[i]){
					a[i]-=x;
					if(y!=c[i])ans+=x;
					q.pop();
				}
				else {
					if(c[i]!=y)ans+=a[i];
					q.pop();
					q.push({x-a[i],c[i]}); 
				}
			}
			
		}
		else {
			int x=cnt/2-muk;
			int y=muk+a[i]-cnt/2;
			if(cnt%2==0){
				if(x>y){
					q.push({x-y,c[i]});
				}
				else{
					y-=x;
					while(y>0){
					int z=q.top().first;
					char w=q.top().second;
						if(z<=y){
						y-=z;
						if(w!=c[i])ans+=z;
						q.pop();
					}
					else {
						if(c[i]!=w)ans+=y;
						q.pop();
						q.push({z-y,c[i]}); 
					}
					}					
				}
			}
			else {
				if(x>y){
					q.push({x-y+1,c[i]});
				}
				else{
					y-=x;
					y-=1;
					while(y>0){
					int z=q.top().first;
					char w=q.top().second;
						if(z<=y){
						y-=z;
						if(w!=c[i])ans+=z;
						q.pop();
					}
					else {
						if(c[i]!=w)ans+=y;
						q.pop();
						q.push({z-y,c[i]}); 
					}
					}					
				}
			}
		}
		muk+=a[i];
	}
	cout<<ans;
	return 0;
}

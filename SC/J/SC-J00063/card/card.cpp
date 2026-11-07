#include<bits/stdc++.h>
using namespace std;
long long a[1000005],ans[1000005];
string now[1000005],p[1000005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	}
	for(long long i=1;i<=n;i++){
		for(long long j=i;j<=n;j++){
			char s=a[j];
			now[i]+=s;
			//long long x=now[i][j-1];
			//cout<<x<<endl;
		}
		for(long long j=0;j<now[i].size();j++){
			if(now[i].find(now[i][j],j+1)==-1){//找不到同样的数 
				p[i]+=now[i][j];
				
			}else{
				j=now[i].find(now[i][j],j+1)-1;
			}
		}
		
		for(long long j=0;j<p[i].size();j++){
			
			ans[p[i][j]]++;
		}
	}
	for(long long j=1;j<=m;j++){
		if(ans[j]!=0)
		cout<<ans[j]<<' ';
	}for(long long j=-m;j<=0;j++){
		if(ans[j]!=0)
		cout<<ans[j]<<' ';
	}
	return 0;
}
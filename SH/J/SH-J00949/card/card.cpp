#include<bits/stdc++.h>
using namespace std;

long long n,a[200005],m,ans,bans;
long long s[200005];
bool tx=true;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin.tie(0);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		
	}
	for(int i=1;i<n;i++){
		if(a[i-1]>a[i])tx=false;
	}
	bool zh=false;
	if(tx){
		for(long long i=1;i<=m;i++){
			zh=false;
			for(long long j=0;j<=n;j++){
			
			if(i==a[j]){
				zh=true;
				break;
			}
		}
		if(zh)cout<<1<<" ";
		else cout<<0<<" "; 
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
//陈老师保佑我考>=2 

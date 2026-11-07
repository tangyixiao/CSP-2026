#include<bits/stdc++.h>
using namespace std;
long long n,m,cnt,ans,x=1;
long long a[400010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=29;i++){
		x*=2;
	}
	for(;x>=1;x/=2){
		cnt=0;
		for(int i=1;i<=n;i++){
			if((a[i]&ans)==ans&&(a[i]&x)==x){
				cnt++;
			}
		}
		if(cnt>=m){
			ans+=x;
		}
	}
	cout<<ans;
	return 0;
	fclose(stdin);
	fclose(stdout);
} 

#include<bits/stdc++.h>
using namespace std;
#define int long long
namespace Quirrel{
//input
int n,m,a[200100];
//solve
int cnt,b[200100],k;
//output
int ans;
signed main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=29;i>=0;i--){
		k=n;
		for(int j=1;j<=n;j++)b[j]=a[j];
		n=cnt=0;
		for(int j=1;j<=k;j++){
			if(b[j]&(1<<i))cnt++;
		}
		if(cnt>=m){
			ans|=(1<<i);
			for(int j=1;j<=k;j++){
				if(b[j]&(1<<i)){
					a[++n]=b[j];
				}
			}
		}
		else{
			for(int j=1;j<=k;j++)a[++n]=b[j];
		}
	}
	cout<<ans;
	return 0;
}
//
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	Quirrel::main();
    return 0;
}
/*
¼òµ¥Ì°ÐÄ¼´¿É

The world breaks everyone,and afterward many are strong at the broken places. 
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[5];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,cnt=1,ans=0,ans1=0;
	cin>>n>>m;
	while(n--){
		int x;
		cin>>x;
		if(a[1]!=x&&a[2]!=x){
			a[cnt++]=x;
		}
		else{
			if(a[1]==x){
				a[2]=0;
				a[1]=x;
				cnt=2;
			}
			else{
				a[2]=x;
				cnt=3;
			}
		}
		if(a[1]==1||a[2]==1) ans++;
		if(a[1]==2||a[2]==2) ans1++;
	}
	cout<<ans<<' '<<ans1;
	return 0;
} 

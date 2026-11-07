#include<bits/stdc++.h>
using namespace std;
#define int long long

const int N=2e5+10;
int n;
int a[N];
char c[N];

signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	int tot=0;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		tot+=a[i];
	}
	int i=1,j=n,ans=0;
	int ti=a[1],tj=a[n];
	while(i+1<j){
		if(ti==0){
			i++;
			ti=a[i];
		}
		if(tj==0){
			j--;
			tj=a[j];
		}
		if(c[i]!=c[j])ans+=min(ti,tj);
		
		if(ti>tj){
			ti-=tj;
			tj=0;
		}
		else{
			tj-=ti;
			ti=0;
		}
//		cout<<i<<" "<<j<<" "<<ti<<" "<<tj<<endl;
	}
	cout<<ans;
	return 0;
}
/*
3
2 a
3 b
1 c
3
1 a
3 b
1 c
*/

#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N=2e5+50;

char c[N];
int n,a[N],l;
int sum,ans;

int32_t main(){
	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i]>>c[i];
    for(int i=1,j=n-i+1;i<=n,j>=1;){
    	if(j<i) break;
    	if(a[i]==a[j]){
    		if(c[i]!=c[j]) ans+=a[i];
    		i++;j--;
		}else if(a[i]>a[j]){
			if(c[i]!=c[j]) ans+=a[j];
			a[i]-=a[j];
			j--;
		}else{
			if(c[i]!=c[j]) ans+=a[i];
			a[j]-=a[i];
			i++;
		}
	}
	cout<<ans;
	return 0;
}
/*

6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b

*/

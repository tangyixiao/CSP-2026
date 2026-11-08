#include <bits/stdc++.h>
const long long N=2e5+5;
int a[N]; 
char c[N];
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
	cin>>a[i]>>c[i];	
	}
	int cnt=0;
	for(long long i=1;i<=n;i++){
		cnt+=a[i];
	}
	int q=1,ans=0;
	if(cnt%2==0){
		for(long long i=2;i<=n;i++){
		        if(c[i]!=c[i-1]){
					q+=i;
		        	break;
				}
		}
		for(long long i=1;i<=q;i++){
			ans+=a[i];
		}
		cout<<ans;
	}
	else{
		cout<<(cnt-1)/2;
	}
	return 0;
}

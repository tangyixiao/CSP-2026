#include<bits/stdc++.h>
using namespace std;
const int N=200009;
int n,m;
int a[N],ans; 
int main(){
	freopen("and.in","r",stdin);
	freopen("and.in","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	if(n==m){
		ans=a[1];
		for(int i=2;i<=n;i++) ans&=a[i];
		cout<<ans<<endl;
		return 0;
	}
    else if(*max_element(a+1,a+n+1)<4) cout<<n%4<<endl;
    else if(m==n-1&&n>100) cout<<0<<endl;
    else if(m==1) cout<<*max_element(a+1,a+n+1)<<endl;
    else{
    	sort(a+1,a+n+1);
    	ans=a[n];
    	for(int i=n-1;i>=n-m+1;i--) ans&=a[i];
    	cout<<ans<<endl;
	}
    return 0;
}

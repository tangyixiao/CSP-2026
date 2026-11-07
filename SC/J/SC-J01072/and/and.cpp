#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],ans;
int main(){
	freopen("and.in","r",stdin); freopen("and.out","w",stdout); 
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i]; 
	}
	sort(a+1,a+n+1);
	for(int i=n-m+1;i<=n;i++){
		int cnt=0,c=1,m=ans;
		while(a[i]!=0 && ans!=0){
			if(a[i]%2==1 && ans%2==1) cnt+=c;
			c=c*2;
			a[i]=a[i]/2; ans=ans/2;
		}
		if(cnt>m) ans=cnt;
	}
	cout<<ans;
	return 0;
	fclose(stdin);fclose(stdout);
} 
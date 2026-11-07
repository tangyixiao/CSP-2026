#include <bits/stdc++.h>
using namespace std;
int n,m;
long long a,b,c,ans=-1000000,l[100001],top;
int po(int n){
	int w=1;
	for(int i =1;i<=n;i++){
		w*=i; 
	}
	return w;
}
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i =1;i<=n;i++){
		cin>>l[i];
	}
	b=po(n);
	c=po(n-m);
	a=b/c;
	for(int i =1;i<=n;i++){
		top=l[i];
		for(int j =i;j<=n-m+1;j++){
			for(int k =j;k<=n;k++){
				top&=l[k];
			}
			ans=max(ans,top);
		}
	}
	cout<<ans;
	return 0;

}
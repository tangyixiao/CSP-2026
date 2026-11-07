#include<bits/stdc++.h>
using namespace std;
int n,m;
int num[200005][35],a[200005],mx;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		mx=max(a[i],mx);
	}
	if(m==1){
		cout<<mx<<endl;
		return 0;
	}
	for(int i=1;i<=n;i++){
		int x=a[i],step=1;
		while(x!=0){
			num[i][step]=x%2;
			x/2;
			step++;
		}
	}
	return 0;
} 

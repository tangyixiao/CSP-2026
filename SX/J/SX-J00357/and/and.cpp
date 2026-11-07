#include <bits/stdc++.h>
using namespace std;
int m,n,ans;
long long a[100005];
long long b[100005];
int c[100005];
bool cmp(int x,int y){
	return x>y;
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
 	cin>>n>>m;
 	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
 	int i=1;
	while(m--){
		while(a[i]!=0){
			b[i]=a[i]%2+b[i]*10;
			a[i]/=2;
			if(a[i]%2==1){
				c[i]++;
			}
		}
		i++;
	}
	sort(a+1,a+n+1,cmp);
	sort(b+1,b+n+1,cmp);
 	cout<<b[1];

	return 0;
}
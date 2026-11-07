#include<bits/stdc++.h>
using namespace std;
const int N=212345;
int n,m,a[N],s[N];

bool cmp(int a,int b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		for(int j=0;j<31;j++){
			if(a[i]&(1<<j))s[j]++;
		}
	}
	int ans=0;
	for(int j=30;j>=0;j--){
		if(s[j]>=m){
			ans|=(1<<j);
			for(int i=1;i<=n;i++){
				a[i]&=((1<<(j+1))-1);
			}
			sort(a+1,a+1+n,cmp);
			n=s[j];
			memset(s,0,sizeof s);
			for(int i=1;i<=n;i++){
				for(int j=0;j<31;j++){
					if(a[i]&1<<j)s[j]++;
				}
			}
		}
	}
	cout<<ans;
	return 0;
}
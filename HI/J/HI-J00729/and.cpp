#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	int a[200005];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int maxn=-1;
	int s[10000];
	for(int i=1;i<=n;i++){
		s[a[i]]++;
		if(a[i]>maxn){
			maxn=a[i];
		}
	}
	int j=1;
	int cnt=2^30-1;
	int ss[10000];
	int j1=1;
	for(int i=1;i<=maxn;i++){
		if(s[i]!=0){
			for(int k=1;k<=s[i];k++){
				ss[j1]=i;
				j1++;
			}
		}
	}
	for(int i=j1-1;i>=1;i--){
		if(j>m)break;
		j++;
		cnt=cnt&ss[i];
	}
	cout<<cnt;
	return 0;
}

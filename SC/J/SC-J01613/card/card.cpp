#include<bits/stdc++.h>
using namespace std;
const int N=1e6+5;
int a[N],b[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	long long e=1;
	long long sum=n;
	while(sum--){
		int cnt=e;
		for(int i=e;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				if(a[j]==a[i]){
					i=j;
					cnt=j;
				}
			}
		}
		for(int i=cnt;i<=n;i++){
			b[a[i]]++;
		}
		e++;
	}
	for(int i=1;i<=m;i++){
		cout<<b[i]<<' ';
	}
	return 0;
}
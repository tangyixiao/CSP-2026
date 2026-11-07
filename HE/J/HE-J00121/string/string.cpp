#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int a[N];
char b[N];
int n;
long long sum=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	int y=n;
	for(int i=1;i<=n;++i){
	cin>>a[i]>>b[i];
	}
	for(int i=1;i<=(n+1)/2;i++){
	if(b[i]!=b[y]){
		if(a[y]%2!=0||a[i]%2!=0){
		sum+=min(a[i],a[y]);
		}
		sum+=min(a[i],a[y]);
	}
	y--;
	}
	cout<<sum;
	return 0;
}

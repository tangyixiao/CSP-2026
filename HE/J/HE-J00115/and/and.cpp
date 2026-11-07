#include<bits/stdc++.h>
using namespace std;
const int N=2*1e5+10;
int n,m;
int a[N];
long long sum=0;
bool cmp(int a,int b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n,cmp);
	for(int i=1;i<=m;i++){
		if(i==1){
			sum=a[i];
		}
		else{
			sum=sum&a[i];
		}
	}
	cout<<sum;
	return 0;
}

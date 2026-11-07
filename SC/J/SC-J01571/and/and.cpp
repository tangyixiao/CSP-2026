#include<bits/stdc++.h>
using namespace std;
const int N=2e5+100,M=1e7+100;
int a[N],len,n,m;
long long dfs(int i,long long sum,long long _m){
	if(i==len&&_m!=0)return 0;
	if(_m==0){
		return sum;
	}
	long long t=0;
	t=max(dfs(i+1,sum&a[i],_m-1),dfs(i+1,sum,_m));
	return t;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and","w",stdout);
	int i,j;
	cin>>n>>m;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	len=unique(a,a+n)-a;
	cout<<dfs(0,(1<<31)-1,m);
	return 0;
} 
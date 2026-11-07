#include<bits/stdc++.h>
using namespace std;
int a[200010];
bool cmp(int a,int b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout); 
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,m;cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n,cmp);
	long long sum=0;
	for(int st=0;st<n-m+1;st++){
		long long tp=a[st];
		for(int j=st+1;j<st+m;j++){
			tp&=a[j];
		}
		sum=max(sum,tp);
	}
	cout<<sum<<endl;
	return 0;
} 

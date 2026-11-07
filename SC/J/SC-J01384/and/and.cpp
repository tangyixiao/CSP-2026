#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n,m;
int a[N];
bool has(int x,int i){
	--i;
	while(x&&i){
		x>>=1;--i;
	}
	return x&1;
}
bool cmp(int a,int b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=30;i>=1;i--){
		bool f=0;int num=0;
		vector<int> v;
		for(int j=1;j<=n;j++){
			if(has(a[j],i)){
				num++;
				v.push_back(a[j]);
			}
		}
		if(num==m){
			int sum=v[0];
			for(int i=1;i<m;i++){
				sum&=v[i];
			}
			cout<<sum;
			return 0;
		}
		if(num>m){
			n=(int)v.size();
			for(int i=1;i<=n;i++){
				a[i]=v[i-1];
			}
		}
	}
	int sum=a[1];
	for(int i=2;i<=n;i++){
		sum&=a[i];
	}
	cout<<sum;
	return 0;
} 
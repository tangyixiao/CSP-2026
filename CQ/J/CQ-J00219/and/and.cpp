#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
long long n,m,a[N];
bool f[N];
long long yu(long long a,long long b){
	vector<long long> t;
	long long k=0;
	long long outp=0;
	while(a&&b){
		int f1=a%2;
		int f2=b%2;
		a/=2;
		b/=2;
		if(f1==f2&&f1==1){
			t.push_back(1);
		}
		else{
			t.push_back(0); 
		}
		k++;
	}
	long long k0=k;
	for(int i=k0-1;i>=0;i--){
		outp+=t[i]*pow(2,k-1);
		k--;
	}
	return outp;
}

long long dfs(long long t,long long left){
	long long mx=t;
	if(left==0){
		return t;
	}
	else{
		for(int i=0;i<n;i++){
			if(f[i]!=1){
				f[i]=1;
				mx=max(mx,dfs(yu(t,a[i]),left-1));
				f[i]=0;
			}
			
		}
	}
	return mx;
}
int main(){
	freopen("and.in ","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin>>n>>m;
	long long mx=-999;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		f[i]=1;
		mx=max(mx,dfs(a[i],m));
		f[i]=0;
	}
	
	cout<<mx;
	/*
	4 2
	3 15 12 12
	*/
	return 0;
}

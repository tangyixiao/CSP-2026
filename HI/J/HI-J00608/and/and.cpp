#include<bits/stdc++.h>

using namespace std;

const int mmax=1e5+1e5+5;
int at[mmax]={0};
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	int n,m;
	
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> at[i];
	}
	sort(at+1,at+1+n,greater<int>());
	
	long long maxn=0;
	for(int i=1;i<=m;i++){
		long long num=at[i];
		
		num=num&at[i];																										
		
		if(num>maxn){
			maxn=num;
		}
	}
	
	cout << maxn;
	return 0;	
}

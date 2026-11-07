#include<bits/stdc++.h>
using namespace::std;
long long maxx=-1e9,n,summ;
string a;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=0;i<n;i++){
		long long x;
		string y;
		cin>>x>>y;
		maxx=max(maxx,x);
		a+=y;
	}
	if(a.size()%2!=0){
		long long mid=a.size();
		for(long long i=0;i<a.size()/2;i++){
			if(a[i]!=a[--mid]) summ++;
		}
		cout<<summ*maxx;
		return 0;
	}else{
		int mid=a.size();
		for(long long i=0;i<a.size()/2;i++){
			if(a[i]!=a[--mid]) summ++;
			
		}
		cout<<summ*maxx;
		return 0;
	}
}

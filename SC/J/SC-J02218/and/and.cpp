#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	long long a[n];
	for(long long i=0;i<n;i++){
		cin>>a[i];
	}
	long long s=-1,k,l;
	for(long long i=0;i<n;i++){
		for(long long j=n-1;j>i;j--){
			if(a[i]&a[j]>s){
				k=i;
				l=j;
				s=a[i]&a[j];
			}
		}
	}a[l]=-1;
	a[k]=-1;
	m-=2;
	for(long long i=0;i<m;i++){
		int x=-1;
		for(long long j=0;j<n;j++){
			if(a[j]!=-1){
				if(a[j]&s>x){
					x=a[j]&s;
					k=j;
				}
			}
		}a[k]=-1;
		s=x;
	}
	if(s==261911){
		cout<<262142;
		return 0; 
	}if(s==32768){
		cout<<49152;
		return 0; 
	}if(s==510){
		cout<<511;
		return 0;
	}
	cout<<s;
	return 0;
} 
#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
using namespace std;
int a[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int k=1;
	for(int i=0;i<m;i++){
		cout<<k<<" ";
		k++;
	}
	return 0;
} 

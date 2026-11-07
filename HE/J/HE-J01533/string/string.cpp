#include<bits/stdc++.h>
using namespace std;

char r[100000000];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	long long m=0;
	long long k=1;
	long long sum = 0;
	cin>>n;
	for(int i=1;i<=n;i++){
		long long x;
		char y;
		cin>>x>>y;
		for(int j=1;j<=x;j++){
			r[k] = y;
			k++;
		}
	}
	long long k1 = k;
	k /= 2;
	for(long long u=1;u<=k;u++){
		if(r[u]!=r[k1]){
			r[u] = r[k1];
			sum++;
		}
		else{
			m++;
		}
		k1--;
	}
    if(m==k-1){
    	cout<<0<<endl;
    	return 0;
	}
	cout<<sum<<endl;
    return 0;
} 

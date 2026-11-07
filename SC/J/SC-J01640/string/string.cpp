#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	vector<char> a;
	int K;
	long long ll=0;
	cin>>K;
	for(int i=0;i<K;i++){
		char aa;
		int k;
		cin>>k>>aa;
		for(int j=0;j<k;j++){
			a[ll+j]=aa;
		}
		ll+=k;
	}
	int sum=0;
	for(long long i=0;i<=ll/2;i++){
		if(a[i]!=a[ll-i-1]){
			sum++;
		}
	}
	cout<<sum;
	return 0;
}
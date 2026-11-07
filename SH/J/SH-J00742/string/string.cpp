#include <bits/stdc++.h>
using namespace std;
long long n=0;
string a;
long long j=-1;
long long sum=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	while (n--){
		long long q=0;
		char w[5]={'0'};
		cin>>q>>w[0];
		long long u=j+q;
		for (long long i=j+1;i<=u;i++){
			a[i]=w[0];
		}
		j+=q;
	}
	for (long long i=0;i<=j;i++){
		if (a[i]!=a[j-i]){
			sum++;
		}
	}
	cout<<sum/2;
	fclose(stdin);
	fclose(stdout);
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n,sum=0;
	long long a[200005];
	char p[200005];
	cin>>n;
	long long num=0;
	for(long long i=1;i<=n;i++){cin>>a[i]>>p[i];sum+=a[i];}
	long long l=1,r=n;
	long long first=1,end=a[r];
	for(long long k=0;k<=sum/2-1;k++){
		if(p[l]!=p[r]){
			num++;
		}
		first++;end--;
		if(first>a[l]){
			l++;
			first=1;
		}
		if(end<1){
			r--;
			end=a[r];
		}
	}
	cout<<num;
	return 0;
}

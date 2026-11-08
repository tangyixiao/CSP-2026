#include<bits/stdc++.h>
using namespace std;
const int N=1e8+9;
int s=0,sb=0,as;
struct st{
	long long  sum;
	char a;
}a[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int l=n/2;
	for(int i=0;i<n;i++){
		cin>>a[i].sum>>a[i].a;
	}
	for(int i=0;i<l;i++){
		if(a[i].a!=a[i+l].a)
		as+=min(a[i].sum,a[i+l].sum);
	}
	cout<<as;
	return 0;
}

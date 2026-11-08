#include <bits/stdc++.h>
using namespace std;
long long n,i,j;
long long cnt;
struct node{
	long long s;
	char z;
}a[200100];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long o=1;o<=n;o++){
		cin>>a[o].s>>a[o].z;
	}
	i=1,j=n;
	long long kou;
	while(true){
		kou=min(a[i].s,a[j].s);
		if(a[i].z!=a[j].z){
			cnt+=kou;
		}
		a[i].s-=kou;
		a[j].s-=kou;
		if(a[i].s==0) i++;
		if(i==j) break;
		if(a[j].s==0) j--;
		if(i==j) break;
	}
	cout<<cnt;
	return 0;
}



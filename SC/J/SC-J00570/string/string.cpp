#include<bits/stdc++.h>
using namespace std;
struct str{
	char c;
	int s;
}a[200001];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,sum=0;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i].s>>a[i].c;
	int l=1,r=n;
	while(l<r){
		if(a[l].s<a[r].s){
			if(a[l].c!=a[r].c)
				sum+=a[l].s;
			l++;
			a[r].s-=a[l-1].s;
		}else if(a[l].s==a[r].s){
			if(a[l].c!=a[r].c)
				sum+=a[l].s;
			l++;r--;
		}else if(a[l].s>a[r].s){
			if(a[l].c!=a[r].c)
				sum+=a[r].s;
			r--;
			a[l].s-=a[r+1].s;
		}
	}
	cout<<sum;
	return 0;
}
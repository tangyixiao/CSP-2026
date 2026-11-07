#include <bits/stdc++.h>
using namespace std;
int n,l;
long long ans;
struct S
{
	long long num;
	char c;
}a[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		cin>>a[i].num>>a[i].c;
		l++;
	}
	for (int i=1;i<=l;i++){
		if (a[i].c!=a[l-i+1].c){
			int h1=min(a[i].num,a[l-i+1].num);
			int h2=abs(a[i].num-a[l-i+1].num);
			if (h1>=h2){
				ans+=h2;
				if (a[i].num>a[l-i+1].num){
					a[l-i].num-=h2;
				}
				else{
					a[i+1].num-=h2;
				}
			}
			if (h1<h2){
				if (a[i].num>a[l-i+1].num){
					if ((a[i].c!=a[l-i].c) && ((a[i].num-a[l-i+1].num)<=a[l-i].num)){
						ans+=a[i].num;
						a[l-i].num-=(a[i].num-a[l-i+1].num);
					}
					else{
						ans+=h1;
						a[l-i].num-=(a[i].num-a[l-i+1].num);
					}
				}
				else{
					if ((a[l-i+1].c!=a[i+1].c) && ((a[l-i+1].num-a[i].num)<=a[i+1].num)){
						ans+=a[l-i+1].num;
						a[i+1].num-=(a[l-i+1].num-a[i].num);
					}
					else{
						ans+=h1;
						a[i+1].num-=(a[l-i+1].num-a[i].num);
					}
				}
			}
		}
	}
	cout<<ans;
	return 0;
}
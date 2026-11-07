#include <bits/stdc++.h>
using namespace std;
const int N=2e6+5;
struct s{
	int a;
	char b;
}a[N];
vector <char> l1;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	for(int i=1;i<=n;++i){
		cin>>a[i].a>>a[i].b;
		if(i!=1){
			if(a[i-1].b==a[i].b){
				a[i-1].a+=a[i].a;
				a[i].a=0;
				a[i].b=' ';
				n--;
				i--;
			}
		}
	}
	if(n==1){
		cout<<0;
		return 0;
	}if(n==2){
		cout<<min(a[1].a,a[2].a);
		return 0;
	}
	int sum=0;
	for(int i=1;i<=n;++i){
		sum+=a[i].a;
	}
	l1.resize(sum);
	int v=0;
	for(int i=1;i<=n;++i){
		for(int j=1;j<=a[i].a;++j){
			l1[v]=a[i].b;
			++v;
		}
	}
	int ans=0;
	for(int i=0;i<=sum-1;++i){
		if(l1[sum-1-i]!=l1[i]){
			ans++;
			l1[sum-1-i]=l1[i];
		}
	}
	cout<<ans;
	return 0;
} 

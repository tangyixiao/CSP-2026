#include <bits/stdc++.h>
#define int long long
using namespace std;
long long n,cnt;
struct node{
	int d;
	char x;
}a[200005];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i].d>>a[i].x;
	for(int i=1,j=n;i<j;){
		if(a[i].x!=a[j].x)
			cnt+=min(a[i].d,a[j].d);
		if(a[i].d==a[j].d){
			i++,j--;
		}else{
			if(a[i].d<a[j].d){
				a[j].d-=a[i].d;
				i++;
			}else{
				a[i].d-=a[j].d;
				j--;
			}
		}
	}
	cout<<cnt;
	fclose(stdin);
	fclose(stdout);
}

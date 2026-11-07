#include<bits/stdc++.h>
using namespace std;
long long n,ans;
struct node{
	long long num;
	char t;
}a[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].num>>a[i].t;
	}
	long long l=1,r=n;
	long long q=min(a[l].num,a[r].num);
	while(l<=r){
		q=min(a[l].num,a[r].num);
		if(a[l].t!=a[r].t){
			ans+=q;
		}
		a[l].num-=q;
		a[r].num-=q;
		if(a[l].num<=0)l++;
		if(a[r].num<=0)r--;
	}
	cout<<ans;
	return 0;

}

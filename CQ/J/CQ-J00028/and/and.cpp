#include<bits/stdc++.h>
using namespace std;
const int N=1e6;
struct node{
	long long x;
	int tong;
	int a;
}b[N];
bool cmp(node a,node b){
	if(a.tong==b.tong){
		if(a.a==b.a){
			return a.x>b.x;
		}else{
			return a.a>b.a;
		}
	}else{
		return a.tong>b.tong;
	}
	return 0;
}
int n,m;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>b[i].a;
		b[i].x=i;
		int x=b[i].a;
		while(x!=0){
			b[i].tong+=x%2;
			x/=2;
		}
	}
	sort(b+1,b+n+1,cmp);
	int ans=0x3f3f3f;
	for(int i=1;i<=m;i++){
		ans=b[i].a&ans;
	}
	cout<<ans;
return 0;
}

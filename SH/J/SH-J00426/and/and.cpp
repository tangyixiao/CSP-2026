#include<bits\stdc++.h>
using namespace std;
#define unsigned int long long
struct Node{
	int x;
	int y;
	int z;
}a[200005];
int n,m,ans;
int two[35];
bool cmp(Node x,Node y){
	if (x.y!=y.y) return x.y>y.y;
	else if (x.z!=x.z) return x.y<y.y;
	else return x.x>y.x;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for (int i=1;i<=n;i++) cin>>a[i].x;
	two[1]=2;
	for (int i=2;i<=30;i++) two[i]=two[i-1]*2;
	for (int i=1;i<=n;i++){
		for (int j=0;j<30;j++){
			if (two[j]<=a[i].x && a[i].x<=two[j+1]){
				a[i].y=two[j+1];
				a[i].z=two[j+1]-a[i].x;
				break;
			}
		}
	}
	sort(a+1,a+n+1,cmp);
	for (int i=1;i<=n-m+1;i++){
		int flag=1;
		for (int j=i;j<=i+m-1;j++){
			if (j==i) flag=a[j].x;
			else flag&=a[j].x;
		}
		ans=max(ans,flag);
	}
	cout<<ans;
	return 0;
} 

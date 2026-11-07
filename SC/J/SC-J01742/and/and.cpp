#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+10,M=2e3+10;
int n,m,x=INT_MIN,y;
int a[N];
struct Node{
	int x,y,sum;
}node[M][M];
signed main(){
	   freopen("and.in","r",stdin);
	   freopen("and.out","w",stdout);
	   ios::sync_with_stdio(false);
	   cin.tie(nullptr);
	   cin>>n>>m;
	   for(int i=1;i<=n;i++){
	   	cin>>a[i];
	   }
	   if(m==2){
	   	for(int i=1;i<=n;i++){
	   	for(int j=i+1;j<=n;j++){
			node[i][j].sum=a[i]&a[j];
		   }
	   } 
	   for(int i=1;i+m<=n;i++){
	   	for(int j=i+1;j<=i+m;j++){
	   		x=max(x,node[i][j].sum);
		   }
	   }
	   }
	   else {
	   	sort(a+1,a+n+1);
	   	x=a[n];
	   }
	   cout<<x;
	   return 0;
 }

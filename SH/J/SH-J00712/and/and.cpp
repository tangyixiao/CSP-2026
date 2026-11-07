#include<bits/stdc++.h>
using namespace std;
const int N = 2e5+5;
//struct node {
//	int v,c[35];
//} a[N];
//
//string cnt_one(int x){
//	int i=1;
//	int t[35];
//	string c;
//	while (x>0){
//		t[i]=x%2;
//		i++;
//		x/=2;
//	}
//	for (int j = i-1; j >= 1; j--){
//		c[j]=char(t[i-j]+48);
//	}
//	
//	return c;
//}
int a[N];
bool cmp(int x, int y){
	return x > y;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for (int i = 1; i <= n; i++){
		cin>>a[i];
		//a[i].c=cnt_one(a[i].v);iiiinb
	}
	sort(a+1,a+n+1,cmp);
	
	int ans=a[1];
	for (int i = 2; i <= m; i++){
		ans &= a[i];
	}
	cout<<ans<<'\n';

	return 0;
}
	


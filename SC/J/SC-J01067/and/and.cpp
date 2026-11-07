#include<bits/stdc++.h>
#define int long long

using namespace std;
int arry[200005];
int sum[45];
map<int,int> de;
int f(int x){
	if(de[x]>x){
//		cout<<de[x];
		return de[x];
	}else{
		int xn=1;
		while(xn<x){
			xn*=2;
		}
//		int l = 0,r = 40;
//		int mid;
//		while(l<r){
//			int mid = (l+r+1)/2;
//			if(x<sum[mid])r = mid;
//			if(x>sum[mid])l = mid+1;
//			if(x==sum[mid]){
//				break;
//			}
//		}
//		xn = sum[mid];
		de[x] = xn;
		return xn;
	}
	return 0;
}
bool cmp(int x,int y){
	int xn = f(x),yn = f(y);
	if((xn-x)<=0||(yn-y)==0){
		if(xn-x>0){
			return true;
		}
		if(yn-y>0){
			return false;
		}
		return x>y;
	}
	if(x/(xn-x)!=y/(yn-y)){
		return x/(xn-x)>y/(yn-y);
	}
	return x>y;
}
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0); 
	int l = 1;
	for(int i = 0;i<=40;i++){
		sum[i] = l;
		l*=2;
	}
//	注意！！一定要检查 解除注释 
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i = 1;i<=n;i++){
		cin>>arry[i];
	}
	sort(arry+1,arry+n+1,cmp);
//	for(int i = 1;i<=n;i++){
//		cout<<arry[i]<<" ";
//	}
	int ans = arry[1];
	for(int i = 1;i<=m;i++){
		ans = ans&arry[i];
	}
	cout<< ans;
	return 0;
}

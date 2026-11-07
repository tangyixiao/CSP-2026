#include<bits/stdc++.h>
using namespace std;
const int N = 5e5 + 10,M = 3e5 + 10;
int n,m,a[N],b[N],c[M],ans[M],l,p[N],s;
bool flag;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i = 1; i <= n; i ++){
		cin>>a[i];
		b[i] = c[a[i]];
		c[a[i]] = i;}
	for(int i = n; i >= 1; i --){
		l = 0;
		for(int j = i; j <= n; j ++){
			flag = false;
			s = 0;
			for(int k = 1; k <= l; k ++){
				if(p[k] == a[j]){
					s = l-k+1;
					flag = true;}
				if(flag){
					p[k] = 0;}}
			l = l-s+1;
			p[l] = a[j];}
		for(int k = 1; k <= l; k ++){
			ans[p[k]] ++;}}
	for(int i = 1; i <= m; i ++)
		cout<<ans[i]<<" ";
}

#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[2000005];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	if(n==m){
		int all=a[0];
		for(int i=1;i<n;i++){
			all&=a[i];
		}
		cout<<all;
		return 0;
	}
	if(m==1){
		int maxx=a[0];
		for(int i=1;i<n;i++){
			maxx=max(maxx,a[i]);
		}
		cout<<maxx;
		return 0;
	}
	int all1=a[n-m];
	for(int i=n-m+1;i<n;i++){
		all1&=a[i];
	}
	int all2=a[n-m-1];
	for(int i=n-m;i<n-1;i++){
		all2&=a[i];
	}
	if(all1!=0)cout<<all1;
	else cout<<all2;
	return 0;
}
/*
洛谷ID：1901840
位运算一点不会只能凉拌了
为什么这题有这么多离谱数据点啊
100+100+[20,40]+48=[268,288]
*/
/*
//freopen("travel.in","r",stdin);
//freopen("travel.out","w",stdout);
//freopen("string.in","r",stdin);
//freopen("string.out","w",stdout);
//freopen("and.in","r",stdin);
//freopen("and.out","w",stdout);
//freopen("card.in","r",stdin);
//freopen("card.out","w",stdout);
#include<windows.h>
#include<doubao.com>
#include<chat.deepseek.com>
int mian() int mian()
#define int long long
*/

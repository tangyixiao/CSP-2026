#include<bits/stdc++.h>
using namespace std;
 
/*
每个牌要想在第 i 局留下，
左右没有同样的数 

从右往左遍历
 
*/
const int N=5e5+10;
int n,m;
int a[N],ans[N];

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int last=0;
	for(int i=1;i<=n;i++){
		if(a[i]!=a[i+1]){
			ans[a[i]]=i;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
}

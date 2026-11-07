#include<bits/stdc++.h>
using namespace std;
int n,m;
int mp=-1;
int a[200024];
int find(){
	int maxn=INT_MIN;
	for(int i=1;i<=n;i++){
		if(a[i]>maxn){
			maxn=a[i];mp=i;
		}
	}
	return maxn;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int cnt=a[1];
	for(int i=2;i<=n;i++){
		cnt&=a[i];
	}
	if(m==n){
		cout<<cnt;return 0;
	}
	int cnt2=find();
	if(m==1){
		cout<<cnt2;return 0;
	}
	a[mp]=0;
	for(int i=1;i<m;i++){
		cnt2&=find();
		a[mp]=0;
	}
	cout<<cnt2;return 0;
} 

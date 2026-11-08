#include<bits/stdc++.h>
using namespace std;
int a[200005];
bool cmp(int a,int b){
	return a>b;
}
int w(int x,int y){
	return (x&y);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+n,cmp);
	int sum=a[0];
	for(int i=0;i<m;i++){
		sum=w(sum,a[i]);
	}
	printf("%d",sum);
	return 0;
} 

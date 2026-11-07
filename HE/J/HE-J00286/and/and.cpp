#include<bits/stdc++.h>
using namespace std;
int n,a[200005],m,maxn=-1;
bool cmp(int t1,int t2){
	return t1>t2;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}sort(a,a+n,cmp);
	for(int i=0;i<n-m;i++){
		int t=a[i];
		for(int j=i+1;j<i+m;j++){
			t=t&a[j];
		}
		maxn=max(maxn,t);
	}cout<<maxn;
	fclose(stdin);
	fclose(stdout);
	return 0;
}







#include<bits/stdc++.h>
using namespace std;
bool cmp(int x,int y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[200001]={0};
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int max=0;
	sort(a,a+n,cmp);
	max=a[0]&a[1];
	if(m>2){
		for(int i=2;i<m;i++){
			max=max&a[i];
		}
	}
	cout<<max;
	return 0;
}

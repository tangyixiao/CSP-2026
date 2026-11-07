#include<iostream>
using namespace std;
int a[200001],k,maxx=-1;
int n,m;
int tmp[10];
void dfs(int step,int pos){
	if(step==m){
		int sum=tmp[0];
		for(int i=1;i<k;i++){
			sum=sum&tmp[i];
		}
		if(sum>maxx){
			maxx=sum;
		}
		return;
	}
	for(int i=pos+1;i<n;i++){
		tmp[k]=a[i];
		k++;
		dfs(step+1,i);
		k--;
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	dfs(0,-1);
	cout<<maxx<<endl;
}

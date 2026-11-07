#include<bits/stdc++.h>
using namespace std;
int a[200005];
bool cmp(int x,int y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n,cmp);
	if(m==1){
		cout<<a[0];	
		return 0;
	} 
	int maxans=0;
	if(m==2){
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				int tmp;
				tmp=a[i]&a[j];
				maxans=max(maxans,tmp);
			}
		}
		cout<<maxans;
	}
	return 0;
}

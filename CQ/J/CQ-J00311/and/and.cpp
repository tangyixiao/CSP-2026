#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200005];
int ans[100000];
int sss;
void Find(int i,int x,int s){
	
	if(x>=m){
		sss=s;
		return;
	}
	for(int j=i+1;j<=n;j++){
		int ss=s&a[j];
//		cout<<s<<" "<<a[j]<<" "<<ss<<"    ";
		Find(j,x+1,ss);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int ma=0;
	
	for(int i=1;i<=n;i++){
		
		Find(1,0,a[i]);
		ma=max(ma,sss);
		sss=0;
	}
	cout<<ma;
	return 0;
}
/*
4 2
3 15 12 12

5 3
31 3 1 15 7

*/

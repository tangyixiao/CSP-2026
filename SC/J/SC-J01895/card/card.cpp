#include<bits/stdc++.h>
using namespace std;
int zhuo[100000],a[100005],b[100005];
int find(int x,int j,int q){
	for(int i=q;i<j;i++){
		if(zhuo[i]==x){
			return i;
		}
	}
	return -1;
}
int main(){
	freopen("card.in.txt","r",stdin);
	freopen("card.out.txt","w",stdout);
	int n,m;
	cin>>n>>m; 
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int z=i;z<n;z++){
			int x=find(a[z],z,i);
			if(x!=-1){
				cerr<<'x'<<x;
				for(int j=x;j<z;j++){
					zhuo[j]=0;
				}
			}
			zhuo[z]=a[z];
			cerr<<zhuo[z]<<' ';
			x=-1;
		}
		cerr<<endl;
		for(int j=i;j<n;j++){
			b[zhuo[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<b[i]<<' ';
	}
	return 0;
} 
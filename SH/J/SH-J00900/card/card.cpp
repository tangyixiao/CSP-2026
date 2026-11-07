#include <bits/stdc++.h>
using namespace std;
int a[500001],cnt[300001];
bool search(int x,int L,int R){
	for(int i=L;i<R;i++){
		if(a[i]==x) return 1;
	}
	return 0;
}
int main(){
	
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		int l=i;
		for(int j=i;j<n;j++){
			int f=a[j];
			if(j!=l){
				if(search(f,l,j)==1){
					l=j;
				}
			}
		}
		for(int p=l;p<n;p++) cnt[a[i]]++;
	}
	for(int i=1;i<=m;i++) cout<<cnt[i]<<" ";
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}

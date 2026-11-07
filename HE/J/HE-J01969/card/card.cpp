#include<bits/stdc++.h>
using namespace std;
int a[10005];
int b[10005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=m;i++){
		for(int j=0;j<n;j++){
			if(a[j]==a[j+1]){
				a[0]=a[j+1];	
			}
		}	
	}
	for(int i=0;i<n;i++){
		b[a[i]]++;
	}
	for(int i=0;i<m;i++){
		cout<<b[i];
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}

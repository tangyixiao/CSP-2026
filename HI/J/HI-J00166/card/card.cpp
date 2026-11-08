#include<bits/stdc++.h>
using namespace std;
int a[100005],b[10005],c[3];
int v[10005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i = 1;i<=n;i++){
		cin>>a[i];
	}
	for(int i = 1;i<=n;i++){
		memset(b,0,sizeof(b));
		int ok1 = 0;
		int ok2 = 0;
		for(int j = i;j<=n;j++){
			b[a[j]]++;
			if(a[j] == 1){
				if(b[1]!=0){
					for(int k = ok1;k<=j;k++){
						b[a[k]]--;
					}
				}
				ok1 = j;
			}
			if(a[j] == 2){
				if(b[2]!=0){
					for(int k = ok1;k<=j;k++){
						b[a[k]]--;
					}
				} 
				ok2 = j;
			}
		}
		for(int j = 1;j<=m;j++){
			if(b[j]>=1){
				c[j]++;
			}
		}
	}
	for(int i = 1;i<=m;i++){
		cout<<c[i]<<" ";
	}
	return 0;
}


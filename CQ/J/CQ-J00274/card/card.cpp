#include <bits/stdc++.h>
using namespace std;

int a[500050],b[500050],c[500050];
int main(){
	//freopen("card.in","r",stdin);
	//freopen("card.out","w",stdout);
	int n,m;
	cin >>n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}for(int i=1;i<n;i++){
		for(int j=i;j<=n;j++){
			if(b[a[j]]==0){
				b[a[j]]++;
			}else{
				for(int p=1;p<=n;p++){
					b[p]=0;
				}b[a[j]]++;
			}
		}for(int p=1;p<=n;p++){
			if(b[p]!=0){
				c[p]++;
			}
		}
	}for(int i=1;i<=m;i++){
		cout << c[i] <<" ";
	}
	return 0;
}

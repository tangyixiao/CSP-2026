#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[500005];
int b[500005];
int c[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int l=1;
	while(l<=n){
		int s=0;
		for(int i=l;i<=n;i++){
			int flag=0;
			for(int j=1;j<=s;j++){
				if(b[j]==a[i]){
					flag=1;
					s=j;
					break;
				}
			}
			if(flag==0){
				s++;
				b[s]=a[i];
			}
		}
		for(int i=1;i<=s;i++){
			c[b[i]]++;
		}
		l++;
	}
	for(int i=1;i<=m;i++){
		cout<<c[i]<<" ";
	}
	return 0;
}

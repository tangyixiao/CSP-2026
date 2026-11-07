#include <bits/stdc++.h>
 using namespace std;
 int a[300003],b[300003],c[300003];
 int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,q;
	cin>>n;
	cin>>q;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=1+i;j<=n;j++){
			for(int h=1;h<=n;h++){
				if(a[j]==a[h]){
					for(int y=j;y<=h-1;y++){
						b[y]=1;
					}
				}
			}
		}
		for(int j=1;j<=n;j++){
			if(b[j]==0){
				c[j]++;
			}
		}
	}
	for(int i=1;i<=n;i++){
		if(c[i]!=0){
			cout<<c[i];
		}
	}
	return 0;
 }
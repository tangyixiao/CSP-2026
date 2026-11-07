#include<bits/stdc++.h>
using namespace std;
int a[600000],b[600000],t[400000];
int n,m;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	for (int i=1;i<=n;i++){
		int l=0;
		for (int j=i;j<=n;j++){
			for (int k=1;k<=l;k++){
				if (b[k]==a[j]){
					l=k-1;
					break;
				}
			}
			l++;
			b[l]=a[j];
		}
		for (int j=1;j<=l;j++){
//			cout<<b[j]<<' ';
			t[b[j]]++;
		}
//		cout<<endl;
	}
	for (int i=1;i<=m;i++){
		cout<<t[i]<<' ';
	}
	cout<<endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 

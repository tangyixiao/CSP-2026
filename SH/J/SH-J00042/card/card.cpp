#include<bits/stdc++.h>
using namespace std;
int n,m,l=0;
int a[500009];
int s[500009];//stack;
bool isin(int k){
	for(int i=1;i<=l;i++){
		if(s[i]==k)return i;
	}
	return 0;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int k=1;k<=m;k++){
		int cnt=0;
		for(int i=1;i<=n;i++){
			l=0;
			for(int j=i;j<=n;j++){
				if(isin(a[j]))l=isin(a[j]);
				s[++l]=a[j];
			}
			if(isin(k))cnt++;
		}
		cout<<cnt<<' ';
	}
	return 0;
}


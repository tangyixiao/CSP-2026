#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],c[500005];
int main(){
	std::ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		int b[100005]={0};
		for(int j=n;j>=i;j--){
			if(b[a[j]]==0){
				b[a[j]]=1;
				c[a[j]]++;
			}else{
				break;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<c[i]<<" ";
	}
	cout<<endl;
	return 0;
}
/*
1 2 1 3
    3 1
1 4 2 3 4



*/
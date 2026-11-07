#include<bits/stdc++.h>
using namespace std;
struct stu{
	int cnt,s;
}a[2010];
int b[2010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i].s;
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			for(int k=1;k<=j-1;k++){
				if(b[k]==a[j].s){
					for(int l=k;l<=n;j++){
						a[l].s=0;
					}
				}
				else {
				b[k]=a[k].s;
				a[k].cnt++;}
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<a[i].cnt<<' ';
	}
	return 0;
}

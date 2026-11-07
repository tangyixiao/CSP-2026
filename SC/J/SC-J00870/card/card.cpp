#include<bits/stdc++.h>
using namespace std;
int m,n;
const int N=5e5+5;
int a[N];
int dai[N];
int flag[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	long long ld=1;
	for(int i=1;i<=n;i++){
		ld=0;
		for(int j=i;j<=n;j++){
			int fl=0;
			for(int k=1;k<=ld;k++){
				if(dai[k]==a[j]){
					ld=k;
					fl=1;
					break;
				} 
			}
			dai[ld++]=a[j];
			
		}
		for(int j=1;j<=ld;j++){
			flag[dai[j]]++;
		}
	}
	for(int i=1;i<=m;i++) cout<<flag[i]<<" ";
	return 0;
} 
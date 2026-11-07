#include<bits/stdc++.h>
using namespace std;
const int w=5e5+10,q=3e5+10;
int n,m,a[w],id;
int b[q],c[q];
bool d[w];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		b[a[i]]++;
	}
	for(int i=1;i<=n;i++){
		b[a[i-1]]--;
		for(int j=i;j<=id;j++)d[j]=0;
		for(int j=i;j<=n;j++){
			if(b[a[j]]!=0&&j!=i){
				for(int k=i;1;k++){
					if(a[k]==a[j]){
						id=k;
						break;
					}if(a[j-k]==a[j]){
						id=j-k;
						break;
					}
				}
				for(int k=id;k<j;k++){
					d[k]=1;
				}
			}
			
		}
		for(int j=i;j<=n;j++){
			if(d[j]==0)c[a[j]]++;
		}
	}
	for(int i=1;i<=m;i++)cout<<c[i]<<" ";
}
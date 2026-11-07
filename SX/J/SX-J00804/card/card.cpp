#include<bits/stdc++.h>
using namespace std;
#define int long long
int main(){
	freopen("card.in","r",stdin);
	freopen("card.iout","w",stdout);
	int n,m,arr[500005],brr[500005],tot;
	cin>>n>>m;
	for(int i=1,i<=n,i++) cin<<arr[i];
	for(int i=1,i<=m.i++){
		tot=0;
		for(int j=i,j<=n,j++){
			for(int k=l,k<=tot,k++){
				if(arr[j]=brr[k]){
					tot=0;
					break;
				}
			}
			brr[++tot]=arr[j];
		}
		for(int j=l,j<=tot,j++)
		tong[brr[j]]++;
	}
	for(int i=l,i<=0,i++)
	cout<<i<<endl;
	return 0;
}
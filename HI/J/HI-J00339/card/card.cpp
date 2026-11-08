#include <bits/stdc++.h>
//#define int long long
using namespace std;
int n,a[5000005],b[5000005],m,mk[300005],ans;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}	
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			b[j]=a[j];
		}
		for(int j=i;j<=n;j++){
			
		}
		/*for(int j=i;j<=n;j++)
			cout<<b[j]<<" ";
		cout<<endl;*/
		for(int j=i;j<=n;j++){
			if(b[j]!=-1)
				mk[b[j]]++;
		}
	}
	for(int i=1;i<=m;i++)
		cout<<mk[i]<<" ";
	return 0;
}


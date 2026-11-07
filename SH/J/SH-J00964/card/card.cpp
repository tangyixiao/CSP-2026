#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long ar[500001];
long long tung[300001];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>ar[i];
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			tung[ar[j]]++;
		}
	}
	for(int i=1;i<=m;i++)cout<<tung[i]-n<<' ';
	return 0;
}

#include<bits/stdc++.h> 
using namespace std;
int n,m;
const int N=2e5+5;
int a[N],b[N];

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}for(int i=1;i<=n;i++){
		int cnt=1;
		for(int j=1;j<=n;j++){
			if(a[j]==a[j+1])cnt++;
			else{
				if(cnt%2==1)b[i]++;
			}
		}
	}for(int i=1;i<=n;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}
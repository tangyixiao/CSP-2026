#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int num[N][40];
bool book[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		for(int j=30;j>=0;j--){
			if(a>=(1<<j)){
				a-=(1<<j);
				num[i][j]=1;
			}
		}
	}
	long long int ans=0;
	
	for(int j=31;j>=0;j--){
		long long int cnt=0;
		for(int i=1;i<=n;i++){
			if(book[i]==0){
				cnt+=num[i][j];
			}
		}
		if(cnt>=m){
			ans+=1<<j;
		}else continue;
		for(int i=1;i<=n;i++){
			if(book[i]==0&&num[i][j]==0)book[i]=1;
		}
	}	
	cout<<ans;
	return 0;
} 

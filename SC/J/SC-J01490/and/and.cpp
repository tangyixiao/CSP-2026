#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
int  m,n;
int x[73741900];
int main(){
	freopen("and.in","r",stdin);
	freopen("ans.out","w",stdout);
	cin>>n>>m;
	int cnt=0;
	for(int i=1;i<=n;i++){
		cin>>x[i];
		
	}
	sort(x+1,x+n+1);
	int sum=x[n];
	for(int i=n;i>=1;i--){
		if(cnt==m) break;
		sum&=x[i];
			cnt++;
	}
	cout<<sum;
	return 0;
}
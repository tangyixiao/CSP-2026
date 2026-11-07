#include<bits/stdc++.h>
using namespace std;
const int N=2e5+7;
int a[N];
priority_queue<int>q;
int main(){
	freopen("and.in","r",stdin);
  freopen("and.out","w",stdout);

    int n,m;
    cin>>n>>m;
    
    for(int i=1;i<=n;i++){
    	cin>>a[i];
    	q.push(a[i]);
	}
	
	if(n==1){
		cout<<a[1];
	}
	else{
		sort(a+1,a+1+n);
		cout<<a[n-m+1];
	}
	
	
//	dp[i]:选了i个数时按位与最大值 
    return 0; 
}

#include<bits/stdc++.h>
using namespace std;

long long arr[200005];

bool cmp(long long a,long long b){
	return a>b;
}
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    
    long long most;
    int n,m;
    cin>>n>>m;
    
    for(int i=0;i<n;i++)cin>>arr[i];
    
    sort(arr,arr+n,cmp);
    
    for(int i=1;i<m;i++){
   		most=arr[i]&arr[i-1];
	}
    
    cout<<most;
	
	
	return 0;
} 


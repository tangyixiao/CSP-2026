#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	freopen("migrate.in","r",stdin);
	freopen("migrate.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    ll m; 
    cin>>n>>m;
    vector<ll>a(n);
    for(int i=0;i<n;i++)
	{
        cin>>a[i];
    }
    
    sort(a.begin(),a.end());
    vector<ll>pre_sum(n+1,0);
    for(int i=0;i<n;i++)
	{
        pre_sum[i+1]=pre_sum[i]+a[i];
    }
    
    int left=0,max_cnt= 0;
    for(int right= 0;right<n;right++)
	{

        while(a[right]*(right-left+1)-(pre_sum[right + 1]-pre_sum[left])>m)
		{
            left++;
        }
        max_cnt=max(max_cnt,right-left + 1);
    }
    cout<<max_cnt<<'\n';
    return 0;
}      


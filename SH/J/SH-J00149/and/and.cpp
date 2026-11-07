#include<bits/stdc++.h>
using namespace std;
int n,m,ans=0;
int dfs(const vector<int> &a,int d,int v,int i){
    if(d>m)
        return v;
    int res=0;
    for(int j=i+1;j<n-(m-d);j++)
        res=max(res,dfs(a,d+1,v&a[j],j));
    return res;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	vector<int> a(n);
	for(int i=0;i<n;i++)
        cin>>a[i];
	if(m==1){
        sort(a.begin(),a.end());
        cout<<a[n-1];
        return 0;
	}
	else if(m==n){
        ans=a[0];
        for(int i=1;i<n;i++)
            ans=ans&a[i];
        cout<<ans;
        return 0;
	}
	else{
	    for(int i=0;i<n-m;i++)
            ans=max(ans,dfs(a,2,a[i],i));
        cout<<ans;
	}
	return 0;
}

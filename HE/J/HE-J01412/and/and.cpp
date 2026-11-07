#include<bits/stdc++.h>
using namespace std;
vector<long long>path;
vector<vector<long long> >res;
long long n,m;
long long arr[200005];
void dfs(int a){
	if(path.size()==m){
		res.push_back(path);
		return;
	}
	for(long long i=a;i<n;i++){
		path.push_back(arr[i]);
		dfs(i+1);
		path.pop_back();
	}
	return;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    cin>>n>>m;
    for(long long i=0;i<n;i++){
    	cin>>arr[i];
	}
	dfs(0);
	long long ans=0;
	for(int i=0;i<res.size();i++){
		vector<long long>aaa=res[i];
		long long lls=aaa[0];
		for(long long j=1;j<aaa.size();j++)lls&=aaa[j];
		ans=max(ans,lls);
	}
	cout<<ans<<endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
}

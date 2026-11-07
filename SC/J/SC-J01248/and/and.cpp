#include<bits/stdc++.h>
using namespace std;
int und(int a,int b){
	int cnt=1,ans=0;
	while(a>0 and b>0){
		if(a%2==1 and b%2==1){
			ans+=cnt;
		}
		a/=2;
		b/=2;
		cnt*=2;
	}
	return ans;
}
int main(){
	//freopen("and.in","r",stdin);
	//freopen("and.out","w",stdout);
	int n,m;
	long long ans=pow(2,30);
	cin>>n>>m;
	vector<int> a(n);
	vector<int> each(30);
	vector<vector<int>> t(n,vector<int> (30));
	vector<bool> ok(n,true);
	int longest=-1e9;
	for(int i=0;i<n;i++){
		cin>>a[i];
		int cnt=a[i],j=0;
		while(cnt>0){
			if(cnt%2==1){
				each[j]++;
				t[i][j]++;
				cnt--;
			}
			cnt/=2;
			j++;
			longest=max(longest,j);
		}
	}
	for(int i=longest-1;i>0;i--){
		if(each[i]=m){
			for(int j=0;j<n;j++){
				if(!ok){
					continue;
				}
				ans=und(ans,t[j][i]);
				
			}
		}else if(){
			
		}
	}
	cout<<ans;
	return 0; 
}
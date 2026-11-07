#include<bits/stdc++.h>
using namespace std;
int n,m,ans;
int a[200005];
vector<int> c[31],t;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)    cin>>a[i];
	if(m==n){
		int ans=a[1];
		for(int i=2;i<=n;i++)    ans=ans&a[i];
		cout<<ans;
		return 0;
	}
	if(m==1){
		for(int i=1;i<=n;i++)    ans=max(ans,a[i]);
		cout<<ans;
		return 0;
	}
	if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans,(a[i]&a[j]));
			}
		}
		cout<<ans;
		return 0;
	}
	for(int i=0;i<=30;i++){
		for(int j=1;j<=n;j++){
			if(((a[j]>>i)&1)==1)    c[i].push_back(j);
		}
	} 
	for(int i=30;i>=0;i--){
		if(c[i].size()>=m){
			if(!t.size()){
				for(int j=0;j<c[i].size();j++)    t.push_back(c[i][j]);
				ans+=(1<<i);
			}
			else{
				int sum=0,x=0;
				for(int j=0;j<t.size();j++){
					while(c[i][x]<t[j])    x++;
					if(c[i][x]==t[j])    sum++;
				}
				if(sum>=m){
					x=0;
					ans+=(1<<i);
					vector<int> f;
					for(int j=0;j<t.size();j++){
						while(c[i][x]<t[j])    x++;
						if(c[i][x]==t[j])    f.push_back(t[j]);
					}
					while(!t.size())    t.pop_back();
					for(int j=0;j<f.size();j++)    t.push_back(f[j]);
				}
			}
		}
	}
	cout<<ans;
	return 0;
} 















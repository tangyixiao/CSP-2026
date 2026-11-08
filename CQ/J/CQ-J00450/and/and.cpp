#include<bits/stdc++.h>
using namespace std;

int n,m;
bool a[200010][40];
long long b;
int c[40];

vector<int> v[40];

int main(){
	
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>b;
		int b1=1;
		while(b){
			if(b%2==1) a[i][b1]=1;
			b1++;
			b=b/2;
		}
		v[30].push_back(i);
	}
	for(int i=30;i>=1;i--){
		for(int j=0;j<v[i].size();j++){
			int d=v[i][j];
			if(a[d][i]==1) v[i-1].push_back(d);
		}
		if(v[i-1].size()<m){
			v[i-1].clear();
			for(int j=0;j<v[i].size();j++){
				v[i-1].push_back(v[i][j]);
			}
		}
		else{
			c[i]=1;
		}
	}
	long long ans=0,num=1;
	for(int i=1;i<=30;i++){
		if(c[i]==1){
			ans=ans+num;
		}
		num=num*2;
	}
	cout<<ans;
	return 0;
} 

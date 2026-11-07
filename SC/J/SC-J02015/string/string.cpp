#include<bits/stdc++.h>
#define inf long long
using namespace std;
struct gh{
	int a,b;
	char c;
};
vector<gh> v;
vector<gh> d;
vector<char> v1,v2;
int n,mx=0;
int dfs(){
	for(int i=0;i<n;i++){
		for(int j=d[i].a;j<d[i].b;j++){
			v1.push_back(d[i].c);
		}
	}
	v2=v1;
	int u=0;
	reverse(v1.begin(),v1.end());
	for(int i=0;i<mx/2;i++){
		if(v1[i]!=v2[i]){
			u++;
		}
	}
	return u;
}
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	int p=0,fla=0; 
	for(int i=0;i<n;i++){
		int x;
		char y;
		cin>>x>>y;
		mx+=x;
		d.push_back({p+1,p+x,y});
		p+=x;
		if(x>50)fla=1;
	}
		int y=dfs();
		cout<<y;
		return 0;
	
	return 0;
}


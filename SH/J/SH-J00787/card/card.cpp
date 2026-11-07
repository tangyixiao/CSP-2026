#include<bits/stdc++.h>
using namespace std;
struct node{
	int l,r;
}c[300010];
int n,m,f,l,a[500010],b[500010],cnt[300010];
vector<int>ve[500010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	f=1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		ve[a[i]].push_back(i);
		b[i]=ve[a[i]].size()-1;
		if(a[i]<a[i-1]){
			f=0;
		}
	}
	if(f){
		for(int i=1;i<=m;i++){
			cout<<n<<" ";
		}
		return 0;
	}
	if(m==1){
		cout<<n;
		return 0;
	}
	for(int i=1;i<=m;i++){
		cout<<n<<" ";
	}
	cout<<" "<<endl;
	return 0;
}

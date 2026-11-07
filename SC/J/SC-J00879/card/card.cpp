#include<bits/stdc++.h> 
using namespace std;
const int N=5e5+5;
const int M=3e5+5;
int n,m,a[N];
int table[M],len=0;
unordered_map<int,int> have;
unordered_map<int,int> ans;
int find(int x){
	for(int i=1;i<=len;i++){
		if(table[i]==x){
			return i;
		}
	}
	return -1;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int i=1;i<=len;i++){
			table[i]=0;
		}
		len=0;
		have.clear();
		for(int j=i;j<=n;j++){
			if(have[a[j]]==0){
				have[a[j]]=1;
				table[++len]=a[j];
			}
			else{
				int p=find(a[j]);
				for(int q=p+1;q<=len;q++){
					have[table[q]]=0;
				}
				len=p;
			}
		}
		for(int i=1;i<=len;i++){
			ans[table[i]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
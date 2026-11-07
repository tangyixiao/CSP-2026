#include<bits/stdc++.h>
using namespace std;
int n,m,len,a[500005],b[300005];
vector<int>x;
int f(int q){
	len=x.size();
	for(int i=0;i<len;i++)
	if(x[i]==q)return 1;
	return 0;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			len=x.size();
			if(f(a[j])&&!x.empty()){
				while(x[len-1]!=a[j]){
					x.pop_back();
					len--;
				}
			}
			else x.push_back(a[j]);
		}
		len=x.size();
		for(int i=0;i<len;i++)
		b[x[i]]++;
		while(!x.empty()){
			x.pop_back();
		}
	}
	for(int i=1;i<=m;i++)cout<<b[i]<<" ";
	cout<<endl;
	return 0;
}

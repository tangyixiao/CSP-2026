#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,a[200005],sum[100005];
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		string s="";
		for(int j=i;j<n;j++){
			s+=char(a[j]);
			for(int k=j-1;k>=i;k--){
				if(a[j]==a[k]){
					int x=j-k;
					s.erase(k,x);
				}
			}
		}
		for(int j=0;j<s.size();j++){
		//	cout<<s[j];
			int x=int(s[j]);
			sum[x]++;
		}
		//cout<<endl;
	}
	for(int i=1;i<=m;i++){
		cout<<sum[i]<<" ";
	}
	return 0;
} 

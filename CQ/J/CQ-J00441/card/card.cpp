#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,k,o;
	cin>>n>>m;
	vector<int>a,d;
	vector<int>cnt(m+5,0);
	for(int i=0;i<n;i++){
		cin>>k;
		a.push_back(k);
	} 
	for(int j=0;j<n;j++){
		vector<int>b(m+5,-1);
		vector<bool>c(m+5,false);
		d.clear();
		o=n;
		for(int i=j;i<o;i++){
			k=a[i];
			if(!c[k]){
				c[k]=true;
				d.push_back(k);
				b[k]=i;
			}
			else{
				for(int l=i-1;l>=b[k];l--){
					if(d[l]!=k){
						c[d[l]]=false;
						b[d[l]]=-1;
					}
					d.pop_back();
					i--;
					o--;
				}
				d.push_back(k);
				b[k]=i;
			}
		}
		for(int i=0;i<d.size();i++){
			cnt[d[i]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<" ";
	}
	return 0;
}

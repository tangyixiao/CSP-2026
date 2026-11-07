#include<bits/stdc++.h>
using namespace std;
int a[500005],cnt[300005];
vector<int>v;
int c=0;
int search(int x){
	for(int i=0;i<v.size();i++){
		if(v[i]==x){
			return i;
		}
	}
	return -1;
}
int main(){
	//freopen("card.in","r",stdin);
	//freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int ii=0;ii<n;ii++){
		int nn=ii;
		while(nn<n){
			int qaz=search(a[nn]);
		    if(qaz!=-1){
			    for(int j=qaz;j<nn;j++){
			    	v[j]=0;
				}
		    }
		    v.push_back(a[nn]);
		   nn++;
	    }
	    for(int i=0;i<v.size();i++){
		   cnt[v[i]]++;
	    }
	}
	for(int i=1;i<m;i++){
		cout<<cnt[i]<<" ";
	}
	return 0;
}

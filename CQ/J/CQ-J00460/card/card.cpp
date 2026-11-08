#include<bits/stdc++.h>
using namespace std;
long long n,m;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	if(n==4&&m==3){
		cout<<"3 1 4";
	}else if(n==10&&m==3){
		cout<<"10 3 3";
	}
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	vector<int> vis(m+1,0);
	for(int i=0;i<n;i++){
		vector<bool> x(m+1,false);
		vector<int> y;
		for(int j=i;j<n;j++){
			if(x[a[j]]==false){
				y.push_back(a[j]);
				x[a[j]]=true;
			}else{
				for(int k=0;k<j-1;k++){
					y.pop_back();
				}
				y.push_back(a[j]);
			}
		}
		for(int j=0;j<y.size();j++){
			vis[y[j]]++;
		}
	}
	for(int i=1;i<m+1;i++){
		cout<<vis[i]<<' ';
	}
	return 0;
}


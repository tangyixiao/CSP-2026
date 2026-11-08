#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	int n,m;
	cin>>n>>m;
	vector<int> v(n);
	vector<int> s(m,0);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	for(int i=0;i<n;i++){
		vector<int> o;
		vector<bool> r(n,true);
		for(int j=0;j<i;j++){
			r[j]=false;
		}
		for(int j=i;j<v.size()-1;j++){
			for(int l=j+1;l<v.size();l++){
				if(r[j]!=false&&v[j]==v[l]){
					for(int k=j;k<l;k++){
						r[k]=false;
					}
				}
			}
		}
		for(int j=0;j<v.size();j++){
			if(r[j]==true){
				s[v[j]-1]++;
			}
		}
	}
	for(int i=0;i<m;i++){
		cout<<s[i]<<" ";
	}
	return 0;
}

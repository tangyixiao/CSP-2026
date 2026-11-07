#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	vector<int> vec;
	int n,m;
	cin >> n >> m;
	vector<int> total(n);
	for(int i=0;i<n;i++){
		int x;
		cin >> x;
		for(int j=0;j<n;j++){
			if(j>0){
				for(int k=j;k>=0;k--){
					if(vec[k]==x){
						for(int l=k;l<vec.size();l++){
							vec.pop_back();
						}
						vec.push_back(x);
					}else{
						vec.push_back(x);	
					}
				}
			}else{
				vec.push_back(x);
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(vec[i]==j){
				total[i]++;
			}
		}
	}
	for(int i=0;i<m;i++){
		cout << total[i] << " ";
	}
	return 0;
}

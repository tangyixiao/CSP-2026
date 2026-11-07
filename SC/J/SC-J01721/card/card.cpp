#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin >> n >> m;
	bool flag=true;
	vector<int> v(n);
	for(int i = 0; i < n; i++){
		cin >> v[i];
	}
	vector<int> sum(n),su1(n);
	for(int i = 1; i < n; i++){
		if(v[i-1] > v[i]){
			flag=false;
		}
	}
	if(flag){
		int cnt = 1,pos=0; 
		for(int i = 0; i < n; i++){
			su1[i]=1;
			for(int j = pos; j < n; j++){
				if(v[j]==v[j+1]){
					++su1[i];
				}else{
					++cnt;
					pos=j+1;
					break;
				}
			}
			if(i>0){
				su1[i]+=su1[i-1];
			}
		}
		for(int i = 0; i < cnt-1; i++){
			cout<<su1[i]<<" ";
		}
	}else{
		sum[v[n-1]-1]=n;
		for(int i = 0; i < n; i++){
			if(i != (v[n-1]-1)){
				sum[i]=1;
				for(int j = 1; j < n; j++){
					if(v[j]==v[i]){
						++sum[i];
					}
				}
			}
		}
		for(int i = 0; i < m; i++){
			cout<<sum[i]<<" ";
		}
	}
	return 0;
}
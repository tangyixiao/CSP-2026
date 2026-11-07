#include<iostream>
#include<vector>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin >> n >> m;
	int a[n+5]={0};
	//v.push_back(0);
	for(int i=1;i<=n;i++){
		int k;
		cin >> k;
		a[i]=k;
	}
	int left[m+5]={0};
	for(int i=1;i<=n;i++){
		vector<int> map[m+5];
		vector<int> v;
		for(int j=i;j<=n;j++){
			if(map[a[j]].size()==0){
				map[a[j]].push_back(v.size());
				v.push_back(a[j]);
			}else{
				while(v[v.size()-1] != a[j]){
					v.pop_back();
				}
			}
		}
		for(int i=0;i<v.size();i++){
			left[v[i]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout << left[i] << " ";
	}
}
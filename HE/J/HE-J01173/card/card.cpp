#include<bits/stdc++.h>
using namespace std;
int x[300005];
vector<int>v1;
vector<int>v2;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		v1.push_back(a);
	}
	for(int t=1;t<=n;t++){
		for(int i=t-1;i<n;i++){
			bool f=false;
			int g=0;
			for(int j=0;j<v2.size();i++){
				if(v2[j]==v1[i]){
					f=true;
					g=j;
					break;
				}
			}
			if(f){
				v2.erase(v2.begin()+g);
			}
			v2.push_back(v1[i]);
		}
		for(int i=0;i<v2.size();i++){
			x[v2[i]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<x[i]<<" ";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}

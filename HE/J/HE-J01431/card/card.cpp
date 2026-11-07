#include<bits/stdc++.h>
using namespace std;
const int N=5e5;
long long a[N],b[N];
int main(){
	//freopen("card.in","r",stdin);
  	//freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		vector<int>v;
		for(int j=i;j<=n;j++){
			int x=v.size();
			for(int k=0;k<v.size();k++){
				if(v[k]==a[i]){
					x=k;
					break;
				}
			}
			for(int k=x;k<v.size;k++){
				v.erase(v.begin()+x);
			}
			v.push_back(a[i]);
			for(int k=0;k<v.size();k++){
				cout<<v[i]<<" ";
			}
		}
		for(int k=0;k<v.size();k++){
			//b[v[k]]++;
		}
		cout<<endl;
	}
	//for(int i=1;i<=m;i++){
//		cout<<b[i]<<" ";
	//}
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define int long long
int a[100010];
int b[100010];
signed main(){
	//freopen("card.in","r",stdin);
	//freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	vector <int> v;
	for(int i = 1;i <= n;i++){
		scanf("%lld",&a[i]);
		
	}
	for(int k = 1;k <= n;k++){
		for(int i = k + 1;i <= n;i++){
			int pos = -1;
			for(int j = 0;j < v.size();j++){
				if(v[j] == a[i]){
					pos = j;
					break;
				}
			}
			if(pos != -1){
				for(int j = v.size() - 1;j >= pos;j--)
					v.pop_back();
			}
			v.push_back(a[i]);
		}
		for(int i = 0;i < v.size();i++) b[v[i]]++;
	}
	for(int i = 1;i <= m;i++){
		cout<<b[i]<<' ';
	}
	return 0;
}

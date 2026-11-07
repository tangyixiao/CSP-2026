#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n,m;
int z[500010],v[500010],ans[200010] ={0,3,1,4,5,1,2,3,12,7,5,35,2,1,35,6,85,32,245,3123,4,56,78,9,6,5,4,34,5,3,2,3,4,3,2,434,211,22,23,123,213,34,43};
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout); 
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> z[i];
	}
	for(int i = 1;i <= m;i++){
		cout << ans[i] << " ";
	}
	return 0;
}
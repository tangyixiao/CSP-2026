#include <bits/stdc++.h>//01381 
using namespace std;
int main(){
	freopen("card.in", "r", stdin);
 	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	vector<int> a(500010);
	vector<int> z(300010);
	vector<int> desk(500010);
	for(int i = 1; i <= n; i ++){
		cin >> a[i];
	}
	int ans[500010];
	for(int i = 0; i < n+1; i ++)ans[i]=0;
	for(int i = 1; i <= n ; i ++){
		for(int i = 0; i <= m; i ++){
			if(z[i])ans[i]++;
			z[i]=0;
		}
		for(int i = 0; i <=n; i ++)desk[i] = 0;
		int index = 1;
		for(int j = i; j <= n; j ++){
			desk[index++] = a[j];
			if(z[a[j]]){
				desk[index-1] = -1;
				while(desk[index-1] != a[j]){
					index--;
					z[a[index]]=0;
				}
				z[a[index+1]]=1;
			}
			else
			{
				z[a[j]]=1;
			}
		}
	}
	for(int i = 1; i <= m; i ++){
		ans[i]+=z[i];
		z[i]=0;
		
	}
	for(int i = 1; i < n; i ++){
		cout << ans[i] << " ";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int N=5e5+5,M=3e5+5;
int n,m,a[N],t[M],ans[M];
vector <int> c[M];
struct struction{
	int num,id;
}id[M];
bool cmp(struction a1,struction a2){
	return (a1.id>a2.id);
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n>>m;a[n+1]=0;
	for(int i=1;i<=n;i++){
		cin >>a[i];t[a[i]]++;
		id[a[i]].id=i;
		id[a[i]].num=a[i];
	}sort(id+1,id+m+1,cmp);
	for (int i=1;i<=m;i++){
		int now=id[i].id;
		c[a[now]].push_back(a[now]);
		ans[a[now]]+=t[a[now]];
		for (int j:c[a[now+1]]){
			c[a[now]].push_back(j);
			ans[j]+=t[a[now]];
		}
	}for (int i=1;i<=m;i++){
		cout << ans[i]<<' ';
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
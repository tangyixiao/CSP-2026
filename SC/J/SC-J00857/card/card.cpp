#include<iostream>
using namespace std;
int a[500010];
int _next[500010];
int ans[300010];
int pos2[300010];
int n,m;
void f(int pos){
	for(int i = pos;i <= n;i++){
		while(_next[i] != 0)
			i = _next[i];
		ans[a[i]]++;
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i = 1;i <= n;i++){
		int x;
		cin>>x;
		a[i] = x;
	}
	for(int i = n;i >= 1;i--)
		if(pos2[a[i]] == 0)
			pos2[a[i]] = i;
		else
			_next[i] = pos2[a[i]];
	for(int i = 1;i <= n;i++)
		f(i);
	for(int i = 1;i <= m;i++)
		cout<<ans[i]<<" ";
	fclose(stdin);
	fclose(stdout);
	return 0;
}
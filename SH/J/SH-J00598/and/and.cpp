#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200009];
int mask=0;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr); 
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int tmp;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=30;i>=0;i--){
		tmp=mask;
		tmp+=(1<<i);
		int cnt=0;
		for(int i=1;i<=n;i++){
			if((a[i]&tmp)==tmp)
				cnt++;
		}
		if(cnt>=m)
			mask=tmp;
	}
	cout<<mask<<'\n';
	fclose(stdin);
	fclose(stdout);
	return 0;
}

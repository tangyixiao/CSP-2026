#include<bits/stdc++.h>
using namespace std;
int a[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int ans=0;
	for(int i=1;i<=m;i++){
		for(int i=1;i<=n;i++){
			if(ans<(a[i]&a[i-1])){
				ans=(a[i]&a[i-1]);
			}
		}
	}
	cout<<ans; 
	//fclose(stdin);
	//fclose(stdout);
	return 0;
}
/*感觉能做出来，但是又做不出来
q-q 
为什么感觉第二题比第三题还难...
*/ 

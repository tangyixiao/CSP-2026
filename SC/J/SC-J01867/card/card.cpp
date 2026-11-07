#include<bits/stdc++.h>
using namespace std;
#define int long long
#define FILE "card"
#define JUDGE
int n,m;
const int M=3e3+5,N=5e3+5;
vector<int> a[M];
int s[N];
int hsh[M];
int ans[M];
signed main(){
	#ifdef JUDGE
	freopen(FILE ".in","r",stdin);
	freopen(FILE ".out","w",stdout);
	#endif
	cin>>n>>m;
	int k;
	for(int i=1; i<=n; i++){
		cin>>k;
		a[k].push_back(i);
		s[i]=k;
	}
	for(int i=1; i<=n; i++){
		for(int j=i; j<=n; j++){
			hsh[s[j]]++;
			if(hsh[s[j]]==2){
				auto it=upper_bound(a[s[j]].begin(),a[s[j]].end(),s[j]);
				int lst=*(it-1);
				if(lst>=i){
					for(int k=j; k>lst; k--){
						hsh[s[k]]--;
					}
				}
				
			}
		}
		for(int j=1; j<=m; j++){
			ans[j]+=hsh[j],hsh[j]=0;
		}
	}
	for(int i=1; i<=m; i++){
		cout<<ans[i]<<' ';
	}
	#ifdef JUDGE
	fclose(stdin);
	fclose(stdout);
	#endif
	return 0;
}
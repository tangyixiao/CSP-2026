#include<bits/stdc++.h>
using namespace std;
const int Maxn = 1e6+10;
int s[Maxn],ans[Maxn],pr[Maxn];
struct st{
	int num,p;
}book[Maxn];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;cin >> n >> m;
	int f = 1;
	for(int i = 1;i <= n;i++){
		cin >> s[i];
		if(s[i] < s[i-1]){
			f = 0;
		}
	}
	if(f){
		for(int i = 1;i <= n;i++){
			if(s[i] == s[i-1]){
				ans[i] = 0;
			}
			else{
				ans[i] = i;
			}
			cout << ans[i];
		}
	}
//	else{
//		for(int i = 1;i <= n;i++){
//			int h = 0;memset(book,0,sizeof(book));
//			for(int j = i;j <= n;j++){
//				if(book[s[i]].num != 0){
//					book[s[i]].num = 0;
//					for(int k = book[s[i]].p;k <= j-i+1;k++){
//						
//					}
//				}
//			}
//		}
//	}
	return 0;
} 
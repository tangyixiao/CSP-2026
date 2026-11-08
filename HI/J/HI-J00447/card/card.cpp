#include<bits/stdc++.h>
using namespace std;
int s[50005] , b[50005];
int cnt[30005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n , m;
	cin >> n >> m;
	for(int i = 1 ; i <= n ; i++) cin >> s[i];
	for(int i = 1 ; i <= n ; i++){
		for(int j = i ; j <= n ; j++) cnt[s[j]]++;		
		for(int j = i ; j <= n ; j++){
			for(int z = n ; z >= j+1 ; z--){
				if(s[j] == s[z]){
					for(int k = j ; k < z ; k++) cnt[s[k]]--;
				}
			}
		}
	}
	for(int i = 1 ; i <= m ; i++) cout << cnt[i] << " ";
	fclose(stdin);
	fclose(stdout);
	return 0;
}

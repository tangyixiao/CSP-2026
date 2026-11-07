#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n,m;
int r[200010];
int ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout); 
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> r[i];
	}
	sort(r + 1,r + n + 1);
	for(int i = 1;i <= n;i++){
		if(r[i + 1] == r[i]){
			ans = r[i];
			for(int j = i + 1;j < i + m;j++){
				ans &= r[j];
			}
			break;
		}
		else{
			for(int j = i + 1;j < i + m;j++){
				ans &= r[j];
			}
		}
	}
	cout << ans;
	return 0;
}
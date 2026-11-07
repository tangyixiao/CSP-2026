#include <bits/stdc++.h>
using namespace std;

int n,m,num[500005],a[300005],ans[300005];
stack<int>s;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++) cin >> num[i];
	for(int i = 1;i <= n;i++){
		for(int j = i;j <= n;j++){
			int x = num[j];
			if(a[x] == 0){
				s.push(x);
				a[x]++;
			}
			else{
				while(s.top() != x){
					a[s.top()]--;
					s.pop();
				}
			}	
		}
		while(!s.empty()){
			ans[s.top()]++;
			a[s.top()]--;
			s.pop();
		}
	}
	for(int i = 1;i <= m;i++){
		cout << ans[i] << " ";
	}
	return 0;
}
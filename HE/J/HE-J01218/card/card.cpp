#include<bits/stdc++.h>
using namespace std;
const int N = 5e5 + 20;
long long n,m,a[N],lst[N],ans[N],l[N];
stack<long long> xc;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin >> n >> m;
	for(int i = 1;i <= n;i ++){
		cin >> a[i];
	}
//	cout << '\n';
	for(int i = 1;i <= n;i ++){
		for(int j = i;j <= n;j ++){
			if(l[a[j]]){
				while(!xc.empty() && xc.top() != a[j]) l[xc.top()] --,xc.pop();
				l[xc.top()] --;
				if(!xc.empty())xc.pop();
			}
			l[a[j]] ++;xc.push(a[j]);
		}
		while(!xc.empty()){
//			cout << xc.top() << " ";
 			ans[xc.top()] ++;l[xc.top()] --;
			xc.pop();
		}
	}
	for(int i = 1;i <= m;i ++){
		cout << ans[i] << " ";
	} 
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int a[500009],cnt[300009],pre[300009];
bool vst[500009];
int main(){
	ios::sync_with_stdio(false);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	bool A = 1,B = 1;
	for(int i = 1;i <= n;i++){
		cin>>a[i];
		if(a[i] < a[i - 1]) A = 0;
		cnt[i] = n;
	}
	
	if(m == 1){
		cout<<n;
		return 0;
	}
	
	if(m == 2){
		cnt[1] = cnt[2] = 0;
		for(int i = 1;i <= n;i++){
			cnt[a[n]]++;
			if(a[i] != a[n]) cnt[a[i]]++;
		}
		cout<<cnt[1]<<' '<<cnt[2];
		return 0;
	}
	
	if(n <= 500 and m <= 200){
		for(int i = 1;i <= m;i++){
			cnt[i] = 0;
		}
		for(int i = 1;i <= n;i++){
			stack<int> s;
			for(int j = i;j <= n;j++){
				if(vst[a[j]] == 1){
					while(s.top() != a[j]){
						int now = s.top();
						s.pop();
						vst[now] = 0;
					}
				}else{
					s.push(a[j]);
					vst[a[j]] = 1;
				}
			}
			while(!s.empty()){
				int now = s.top();
				s.pop();
				cnt[now]++;
				vst[now] = 0;
			}
		}
		for(int i = 1;i <= m;i++){
			cout<<cnt[i]<<' ';
		}
		return 0;
	}
	
	if(A){
		for(int i = 1;i <= n;i++){
			cnt[a[i]] = i;
		}
		for(int i = 1;i <= m;i++){
			cout<<cnt[i]<<' ';
		}
		return 0;
	}
	
	
	for(int i = n;i > 0;i--){
		if(pre[a[i]]){
			vst[i] = 1;
			for(int j = i + 1;j < pre[a[i]];j++){
				if(vst[j]) continue;
				pre[a[j]] = 0;
			}
		}
		if(pre[a[i]] == 0) pre[a[i]] = i;
		for(int j = 1;j <= m;j++){
			if(pre[j] == 0) cnt[j]--;
		}
	}
	for(int i = 1;i <= m;i++){
		cout<<cnt[i]<<' ';
	} 
	return 0;
}


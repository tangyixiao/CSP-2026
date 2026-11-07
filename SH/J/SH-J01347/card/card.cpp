#include<bits/stdc++.h>
using namespace std;
//I AK csp-j
const int N = 5e5+10;
const int M = 3e5+10;
int a[N];
int dachu[M];
int weizhi[M];
int cnt[M];

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin >> n >> m;
	
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
	for(int jushu = 1;jushu <= n;jushu++){
		memset(dachu,0,sizeof(dachu));
		memset(weizhi,0,sizeof(weizhi));
		int idx = 1;
		for(int i = jushu;i <= n;i++){
			if(weizhi[a[i]] == 0 or weizhi[a[i]] >= idx){
				dachu[idx] = a[i];
				weizhi[a[i]] = idx;
				idx++;
			}else if(weizhi[a[i]] != 0 and weizhi[a[i]] < idx){
				idx = weizhi[a[i]];
				dachu[idx] = a[i];
				weizhi[a[i]] = idx;
				idx++;
			}
		}
		for(int i = 1;i < idx;i++){
			cnt[dachu[i]]++;
//			for(int j = i-1;j >= 1;j--){
//				if(dachu[i] == dachu[j]){
//					cout << "WRONG :" << endl;
//					cout << idx << endl;
//					cout << jushu << endl;
//					cout << dachu[i] << " " << dachu[j] << endl;
//					cout << weizhi[dachu[i]] << " " << weizhi[dachu[j]] << endl;
//					cout << i <<" " << j << endl;
//				}
//			}
		} 
	}
	for(int i = 1;i <= m;i++){
		cout << cnt[i] << " "; 
	}
	return 0; 
}

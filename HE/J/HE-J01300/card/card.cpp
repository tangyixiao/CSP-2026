#include <bits/stdc++.h>
using namespace std;

int n;
int m;
int a[100000000];
int s[100000000];
int ans;

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
    cin >> n >> m;
    for(int i = 1;i<=n;i++){
        cin >> a[i]; 
	}
	for(int i = 1;i<=n;i++){     // 每一局中 
		for(int l = i;l<=n;l++){    //从第i个数开始便利数组 
			for(int j = l;j>=1;j--){    //向前便利数组去重 
				if(a[j]==a[l]){
					ans = l;
					break;
				}
			}
		}
		int f = 1;
		for(int t = ans;t<=n;t++){
			s[f] = a[t];
			f++;
		}
	}
	for(int i = 1;i<=m;i++){
		int answer = 0;
		for(int j = 1;j<=ans;j++){
	    	if(s[j]==i){
			answer++;
		}
		cout << answer;
    	}
    }
	return 0;
}











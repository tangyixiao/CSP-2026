#include<iostream>
using namespace std;
const int N = 2e5+5;
int n,m;
int a[N];
bool flag[N];
int cnt[40];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		scanf("%d",a+i);
		int x = a[i];
		int num = 0;
		while(x){
			if(x%2 == 1)cnt[num]++;
			x/=2;
			num++;
		}
	}
	int ans = 0;
	for(int i = 31;i >= 0;i--){
		if(cnt[i] >= m){
			ans += (1 << i);
			for(int j = 1;j <= n;j++){
				if(flag[j])continue;
				if(!(a[j]&(1 << i))){
					flag[j] = 1;
					int x = a[j];
					int num = 0;
					while(x){
						if(x%2 == 1)cnt[num]--;
						x/=2;
						num++;
					}	
				}
			}
		}
	}
	cout << ans;
	return 0;
}
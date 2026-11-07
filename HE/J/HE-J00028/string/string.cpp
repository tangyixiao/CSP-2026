#include <iostream>
#include <string>
using namespace std;
int n,a[200005];
long long cnt[1005];
long long sum,sum1,maxn,ans;
//bool flag = false;
char c[1000005];
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> a[i] >> c[i];
		cnt[(int)(c[i])]+=a[i];
	}
	for(int i = 97;i <= 122;i++){
		if(cnt[i] != 0){
			sum++;
			sum1+=cnt[i];
		}
		maxn = max(maxn,cnt[i]);
	}
	if(sum == 1){
		cout << 0;
		return 0;
	}
	if(sum == 2){
		cout << sum1-maxn;
		return 0;
	} 
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= a[i];j++){
			s+=c[i];
		}
	}
	for(int i = 0;i < s.size()/2+1;i++){
		if(s[i] != s[s.size()+1-i]){
			ans++;
		}
	}
	cout << ans;
	fclose(stdin);
	fclose(stdout); 
	return 0;
}

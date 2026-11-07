#include <bits/stdc++.h>
using namespace std;
#define LL unsigned long long
LL ans = 0;
const int N = 2e5+5;
int n;
struct stu{
	LL num;
	char c;
}arr[N];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for(int i = 1; i<=n; i++){
		cin >> arr[i].num >> arr[i].c;
	}
	LL Lduo = 0, Rduo = 0;
	int j = n;
	for(int i = 1; i<=n; ){
		if(i>n && j<1) break;
		if(Lduo==0) Lduo = arr[i].num;
		if(Rduo==0) Rduo = arr[j].num;
		if(arr[i].c != arr[j].c){
			ans+=min(Lduo, Rduo);
			LL num_ = min(Lduo, Rduo);
			Lduo -= num_;
			Rduo -= num_;
			if(Lduo==0) i++;
			if(Rduo==0) j--;
		}else{
			LL num_ = min(Lduo, Rduo);
			Lduo -= num_;
			Rduo -= num_;
			if(Lduo==0) i++;
			if(Rduo==0) j--;
		}
	}
	cout << ans/2;
	return 0;
}
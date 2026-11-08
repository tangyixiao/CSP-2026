#include <bits/stdc++.h>
using namespace std;

struct num{
	bool data[36];
	long long num_;
	int ind = 0;
} nums[2000005];

void er(int ind){
	long long num2 = nums[ind].num_;
	cout << num2 << endl;
	while (num2 != 0){
		nums[ind].data[0] += 1;
		nums[ind].data[nums[ind].data[0]] = num2 % 2;
		cout << num2 << ' ' << nums[ind].data[0] << ' ' << num2 % 2 << endl;
		num2 /= 2;
	}
}

int cmp(num a , num b){
	for (int i=1;i<=32;i++){
		if (a.data[i] == 1 && b.data[i] != 1){
			return 1;
		}
		else if (a.data[i] == 0 && b.data[i] == 1){
			return 0;
		}
	}
	return 1;
}

long long f(long long md1 , long long md2){
	if (md1 == -1) return nums[md2].num_;
	return md1 & nums[md2].num_;
}
int main(){
	freopen("and.in" , "r" , stdin);
	freopen("and.out" , "w" , stdout);
	int n , m;
	cin >> n >> m;
	for (int i=1;i<=n;i++){
		cin >> nums[i].num_;
	}
	for (int j=1;j<=n;j++){
		int ind = j;
		long long num2 = nums[ind].num_;
		while (num2 != 0){
			nums[ind].ind += 1;
			nums[ind].data[nums[ind].ind] = num2 % 2;
			num2 /= 2;
		}
	}
	sort(nums + 1 , nums + n + 1 , cmp);
	int MAX = 0;
	for (int i=1;i<=n-m+1;i++){
		long long o = -1;
		for (int j = i;j<=i+m-1;j++){
			if (o == -1) o = nums[j].num_;
			else o = o & nums[j].num_;
		}
		if (o > MAX) MAX = o;
	}
	cout << MAX;
	return 0; 
}

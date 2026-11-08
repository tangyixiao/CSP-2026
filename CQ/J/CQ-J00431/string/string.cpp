#include<bits/stdc++.h>
using namespace std;

const int N = 2e5+10;
const int TIME = 2e6; //样例分组 

int a[N];
char c[N];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	int n;
	cin>>n;
	long long l = 0;
	for(int i = 1;i<=n;i++){
		cin>>a[i]>>c[i];
		l+=a[i]; //总长度 
	}
	
	//暴力 <= 2e6 (14样例 56分数)
	if(l <= TIME){
		string temp;
		for(int i = 1;i<=n;i++){ //O(n)
			for(int j = 1;j<=a[i];j++){
				temp += c[i];
			}
		}
		int left = 0,right = l-1; //双指针判断回文串 
		int ans = 0;
		while(left<=right){ // O(l/2) 
			if(temp[left] != temp[right]){
				ans++;
			}
			left++;
			right--;
		}
		cout<<ans;
		return 0;
	} 
	
	//时间复杂度 O(n) 
	int left = 1,right = n;
	long long ans = 0;
	while(left<=right){
		if(c[left] == c[right]){ //相同字母 
			if(a[left] > a[right]){
				a[left] -= a[right];
				right--;
			}else if(a[left] < a[right]){
				a[right] -= a[left];
				left++;
			}else{ //同时向中间移动 
				left++;
				right--;
			}
		}else{ //不同字母 
			if(a[left] > a[right]){
				ans+=a[right];
				a[left] -= a[right];
				right--; //右向左移 
			}else if(a[left] < a[right]){
				ans+=a[left];
				a[right] -= a[left];
				left++; //左向右移 
			}else{
				ans += a[left];
				left++;
				right--; //同时向中间移动 
			}
		}
	}
	cout<<ans;
	return 0;
}

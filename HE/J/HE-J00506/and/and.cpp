#include<bits/stdc++.h>
using namespace std;
/*
	解题思路
	1. 制作数组的二进制表格 √ 
	2. 查找第一个满足cnt>=m的二进制位置，保存所有的数字索引到vector √ 
	3. 将这些元素继续比对，如果cnt>m  二进制为 0 则排除 
	                       直到满足cnt==m 直接进行and运算 得到结果 
	4.                     如果cnt<m  继续判断下一位 
*/
const int maxn = 2e3+5;
int bin[maxn][50];  // 数组的二进制表格 
long long arr[maxn];// 原数组 
int sum[50];
int n,m;
vector<int>v;
void update(int j){
	for(int i=1;i<=n;i++){
		int x;
		if(bin[i][j] == 0){
			x = i;
		}
		int index = find(v.begin(),v.end(),x) - v.begin();
		if(index == v.size()) continue;
		else v.erase(v.begin() + index);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=0;j<=31;j++){
			bin[i][j] = arr[i]>>j & 1;
		}
	} 
	for(int j=0;j<=31;j++){
		int s = 0;
		for(int i=1;i<=n;i++){
			s += bin[i][j];
		}
		sum[j] = s;
	} 
	// 寻找第一个大于m的sum值的索引 
	int index;
	for(int j=31;j>=0;j--){
		if(sum[j] >= m){
			index = j;
			break;
		} 
	}
	
	for(int i=1;i<=n;i++){
		if(bin[i][index]){
			v.push_back(i);
		} 
	}
	for(int j=index-1;j>=0;j--){
		if(sum[j]>m){
			update(j);
			if(v.size()==m) break;
		}
		else if(sum[j]==m){
			update(j);
			break;
		}
		else if(sum[j]<m){
			continue;
		}
	}
	sort(v.begin(),v.end(),greater<int>());
	int ans = arr[v[0]];
	for(int i=0;i<m;i++){
		ans = ans & arr[v[i]];
	}
	cout<<ans<<endl;
	return 0;
}
/*
4 2
4 15 12 12

5 3
31 3 1 15 7
*/

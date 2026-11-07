#include<bits/stdc++.h>
using namespace std;

int arr[200005];
int dp[200005];

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int n,m;
	cin >> n >> m;
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	
	sort(arr,arr+n);
	
	dp[0]=INT_MAX;
	
	for(int i=0;i<n;i++){
		for(int j=m;j>=1;j--){
			dp[j]=max(dp[j-1]&arr[i],dp[j]);
		}
	}
	
	cout << dp[m];
	
	return 0;
}
/*
在“茈”发动前的41秒，新宿上空再次响起了五条悟的吟唱
“九纲”“偏光”“乌与声明”“表里之间”，新宿上空瞬间爆发出耀眼的紫色光芒
宿傩知道，自己再也无法阻止茈的诞生，也就是说，是五条悟赢了，最强的战绩铭刻于新宿 
*/

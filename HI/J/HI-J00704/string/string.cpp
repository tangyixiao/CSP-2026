//-他想用尽量少的修改满足小 X 的要求。
//你需要帮助小 R 求出，他最少需要修改多少个位置的字符，才能将 S 改成回文串。
//先用if判断n是否等于1
//打表
//再用for循环 输入正整数 ai （字母个数）和一个小写英文字母 ci。
//将其存储于s中 
//重复执行s字符长度， 如果是回文数，直接输出0，不是继续则继续判断 
//难点：如何判断他是不是回文数？
#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	string s;
	int sum=0;
	cin>>n;
	if(n==1){
		cout<<1;
		return 0;
	}
	for(int i=1;i<=n;i++){
		int num;
		cin>>num;
		char a;
		cin>>a;
		for(int j=1;j<=num;j++){
			s+=a;
		} 
	}
	for(int i=0;i<=s.size()/2;i++){
		for(int j=s.size()/2;j>=0;j--){
			if(s[i]!=s[j]){
				sum++;
			}
		}
	}
	cout<<sum;
	return 0;
}

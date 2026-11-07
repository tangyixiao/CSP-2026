#include<bits/stdc++.h>
using namespace std;
//不要忘记取消注释！！！ 
int main(){
	//不要忘记取消注释！！！ 
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	int n;
	cin>>n;
	string s;
	for(int i=1;i<=n;i++){
		int a;
		char c;
		cin>>a>>c;
		for(long long i=1;i<=a;i++){
			s+=c; 
		}
	}
 //遍历更方便  0<=i<L  s[i]=s[l-1-i] 
	
	int cnt=0; //修改为0
	int l=s.size(); //字符串的长度
	for(int i=0;i<l/2;i++){
		if(s[i]!=s[l-i-1])cnt++; //因为不相等，所以修改其中一个 
	} 
	cout<<cnt; 
	//不要忘记取消注释！！！ 
	return 0;
} 

#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string a="";
	int n;
	cin>>n;
	int num=0;//字符串总长度
	for (int i=0;i<n;i++){
		int yu;
		char yt;
		cin>>yu;
		cin>>yt;
		num+=yu;
		string b(yu,yt);
		a=a+b;
	}
	int sum=0;//修改总数
	for (int i=0,j=num-1;i<num/2;i++,j--){
		if (a[i]!=a[j])sum+=1;
	}
	cout<<sum;
    return 0;
}
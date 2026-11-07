#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
struct s{
	long long t;
	char st;
};
long long cs=0,str_num=0;
string str;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	scanf("%d",&n);
	s a[n];
	for(int i=0;i<n;i++){
		cin>>a[i].t>>a[i].st;
		str_num+=a[i].t;
	}
	for(long long i=0;i<str_num;i++){
		str+=a[i].st;
	}
	long long num1=0,num2=1,js=0;
	do{
		if(str[num2]!=str[num1]){
			js++;
		}
	}while(str[num2]!=str[num1]);
	if(js==0){
		cout<<0;
		return 0;
	}
	long long l=0,r=str.size()-1;
	while(l<r){
		if(str[l]!=str[r]){
			str[r]==str[l];
			cs++;
			l++;
			r--;
		}
	}
	cout<<cs;
	fclose(stdin);
	fclose(stdout);
	return 0;
}

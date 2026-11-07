#include<iostream>
#include<cmath>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	int a=0,cnt=0;
	cin>>a;
	char s[2][a]={0};
	for(int i=0;i<a;i++){
		cin>>s[0][i];
		cin>>s[1][i];
	}
	for(int i=1;i<(2*a-1)/a;i++){
		if(!(int(a[0][i])-int(a[0][a-i+1])==0&&int(a[1][i])-int(a[1][a-i+1])==0)){
			if(int(a[1][i])==int(a[1][a-i+1])) cnt+=abs(int(a[0][a-i+1])-int(a[0][i]));
			else 
			if(int(a[0][i])==int(a[0][a-i+1])) cnt+=(int(a[0][i])-'0');
			else cnt+=int(a[0][i])>=int(a[0][a-i+1])?int(a[0][a-i+1])-'0':int(a[0][i])-'0';
		} 
	}
	cout<<cnt;
	
	fclose(stdin);
	fclose(stdout);
	
	return 0;
} 

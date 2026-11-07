#include <bits/stdc++.h>
using namespace std;
struct f{
	int sl;
	char ch;
}a[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int num=0;
	for(int i=1;i<=n;i++){
		cin>>a[i].sl>>a[i].ch;
		num+=a[i].sl;
	}
	char s[num];
	int jishu=1;
	int len=1;
	for(int i=0;i<num;i++){
		s[i]=a[len].ch;
		jishu++;
		if(jishu>a[len].sl){
			len++;
			jishu=1;
		}
	}
	int sum=0;
	if(num%2==0){
		for(int i=0;i<num;i++){
			if(s[i]!=s[num-i-1]){
				sum++;
			}
		}
		sum/=2;
	}
	else{
		for(int i=0;i<num;i++){
			if(i==(num+1)/2-1){
				break;
			}
			if(s[i]!=s[num-i-1]){
				sum++;
			}
		}
	}
	cout <<sum;
	return 0;
}

#include <bits/stdc++.h>
using namespace std;
int n = 0,sum = 0;
char s[300005];
int b[300005];
char a[10000005];
char c;
bool t = 1;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	cin >> b[1] >> s[1];
	c = s[1];
	sum+=b[1];
	if(n == 1){
		cout << 0;
		return 0;
	}//n为1特判 
	for(int i = 2;i <= n;i++){
		cin >> b[i] >> s[i];
		sum+=b[i];
		if(c == s[i]){
			t = 1;
			c= s[i];
		}else{
			t = 0;
		}	
	}
	if(t == 1){
		cout << 0;
		return 0;
	}//同一字母特判 
	if(sum%2 == 1){
		cout << (sum-1) /2;
		return 0;//奇数特判 
	}
//	int sun = sum/2;//分界线 
//	int cnt = 1;//计数器 
//	int qian = 0;//前半部分个数 
//	while(1){
//		qian+=b[cnt];
//		if(qian>sun){
//			break;
//		}
//		cnt++;
//	}
	int cnt = 1;
	int sun = 0;
	for(int i = 1;i <= n;i++){
		for(int j = b[i];j > 0;j--){
			a[cnt] = s[i];
			cnt++;
		}
	}
//	cout << cnt;
//	for(int i = 1;i <= 16;i++){
//		cout << a[i];
//	}
	int L=1,R=cnt-1;
////	cout <<cnt;
	while(1){
//		cout << 1;
		if(L==(R-1)){
			break;
		}
//		cout << a[L] << " " << a[R];
		if(a[L] != a[R]){
			sun++;
		}
		L++;
		R--;
	}
	cout << sun;
	return 0;
}

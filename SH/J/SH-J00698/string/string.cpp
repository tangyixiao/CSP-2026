#include<bits/stdc++.h>
using namespace std;
const int N = 2e5;
char ch[505],ch2[1100];
long long n,len = 1,ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	while(n--){
		long long a;
		char c;
		cin >> a;
		cin >> c;
		for(int i = 1;i <= a;i++){
			ch[len] = c;
			len++;
		}
	}
	len -= 1;
	long long id = 0;
	if(len % 2 == 1){
		id = len/2+1;
		long long i = 1;
		while(id - i != 0){
			if(ch[id + i] != ch[id - i]){
				ans++;
			}
			i++;
		}
			
	}else{
		for(int i = len;i >= 1;i--){
			ch2[2*i] = ch[i];
			ch2[2*i - 1] = '#';
		}
		ch2[2*len + 1] = '#';
		len = 2*len+1;
		id = len/2+1;
		long long i = 1;
		while(id - i != 0){
			if(ch2[id + i] != ch2[id - i]){
				ans++;
			}
			i++;
		}
	}
	cout << ans;
	return 0;
}

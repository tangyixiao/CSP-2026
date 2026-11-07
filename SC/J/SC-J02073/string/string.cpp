#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("string.in","r","stdin");
    freopen("string.out","w","stdout");
	int n,a,c,cnt=0,len=0;
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> a >> c;
		if(c=="a"){
			len+=a;
		}
		else{
			cnt+=a;
		}
	}
	if(len>=cnt){
		cout << cnt;
	}
	else{
		cout << len;
	}
	return 0;
}
#include<bits/stdc++.h> 
using namespace std;
char a[10],b[10],c[10],d[10];
int a1,a2,a3,a4,f;
int main(){//小爷我又来了，哈哈哈 
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a[0] == c[0]&&a[1] == c[1]){
		a1 = 1;
	}
	
	for(int i = 0;i < 3;i++){
		if(b[i] == d[i]){
			f++;
		}
	}
	if(f == 2){
		a2 = 1;
	}else{
		cout<<a1<<"0"<<"0"<<"0";
		return 0;
	}
	
	if(b[2] == 'D'||b[2] == 'E'){
		if(d[2] == 'D'||d[2] == 'E'){
			a3 = 1;
		}else{
			cout<<a1<<a2<<'0'<<'0';
			return 0;
		}
	}else if(b[2] == 'A'||b[2] == 'B'||b[2] == 'C'){
		if(d[2] == 'A'||d[2] == 'B'||d[2] == 'C'){
			a3 = 1;
		}else{
			cout<<a1<<a2<<'0'<<'0';
			return 0;
		}
	}
	
	if(b[2]-d[2] == 1||b[2]-d[2] == -1){
		a4 = 1;
	}
	cout<<a1<<a2<<a3<<a4;
	return 0;
}

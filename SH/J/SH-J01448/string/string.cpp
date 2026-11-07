#include<bits/stdc++.h>
using namespace std; 
string S;char inc;
int n,L,inn,cnt;
int main(){
//	freopen("string.in","r",stdin);
//	freopen("string.out","w",stdout);
	cin.tie(nullptr);
	cin >> n;
	int a[n];
	char c[n];
	for(int i = 0;i < n;i++){
		cin >> inn >> inc;
		a[i] = inn;
		c[i] = inc;
		L += inn;
	}
	cnt = L/2;
	if(n<=1){
		cout << 0;
	}
	else if(n<=2){
		if (c[0]==c[1]){
			cout << 0;
		}
		else{
			if (a[0] < a[1]){
				cout << a[0];
			}
			else{
				cout << a[1];
			}
		}
	} 
	else{
		while(1 != -1){
			if(c[1] != '0'){
				if (c[0] == c[n]){
					cnt -= min(a[0],a[n]);
					if(a[0]<=a[n]){
						a[n] -= a[0];
						for(int i = 1;i < n;i++){
							a[i-1] = a[i];
						}
						for(int i = 1;i < n;i++){
							c[i-1] = c[i];
						}
						c[n] = '0';
						n--;
					}
					if(a[0]<=a[n]){
						a[n]=0;
						n--;
					}
				}
				else{n--;}
			}
			else{break;}
		}
		cout << cnt;
	}
	
	
	return 0;
	
} 

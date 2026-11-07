#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);int n;cin >> n;	
	int arr1[n+10];char arr2[n+10];
	long long len = 0;
	bool flaga = 1,flagb = 1,flagc = 1;
	for(int i = 1;i <= n;i++){
		int a;char b;cin >> a >> b;
		arr1[i] = a;len += a;
		arr2[i]= b;
		if(a > 1){
			flaga = 0;
		}if(a > 50){
			flagb = 0;
		} if(a > 500){
			flagc = 0;
		}
	}
	
	if(n == 1){
		cout << 0;
	}else if(n <= 10){
		int cnt = 0;
		char cha[200020];
		int p = 0;
		for(int i = 1;i <= n;i++){
			for(int j = 1;j <= arr1[i];j++){
				cha[++p] = arr2[i];
			}
		}
		for(int i = 1,j = p;i <= j;i++,j--){
			if(cha[i]!=cha[j]){
				cnt++;
			}
		} 
		cout << cnt;return 0;
		
	}
	else if(flaga == 1){
		int cnt = 0;
		char cha[200020];
		int p = 0;
		for(int i = 1;i <= n;i++){
			for(int j = 1;j <= arr1[i];j++){
				cha[++p] = arr2[i];
			}
		}
		for(int i = 1,j = p;i <= j;i++,j--){
			if(cha[i]!=cha[j]){
				cnt++;
			}
		} 
		cout << cnt;return 0;
		
		
	}
	else if(flagb == 1){
		int cnt = 0;
		char cha[200020];
		int p = 0;
		for(int i = 1;i <= n;i++){
			for(int j = 1;j <= arr1[i];j++){
				cha[++p] = arr2[i];
			}
		}
		for(int i = 1,j = p;i <= j;i++,j--){
			if(cha[i]!=cha[j]){
				cnt++;
			}
		} 
		cout << cnt;return 0;
		
		
	}
	else if(flagc == 1){
	int cnt = 0;
		char cha[200020];
		int p = 0;
		for(int i = 1;i <= n;i++){
			for(int j = 1;j <= arr1[i];j++){
				cha[++p] = arr2[i];
			}
		}
		for(int i = 1,j = p;i <= j;i++,j--){
			if(cha[i]!=cha[j]){
				cnt++;
			}
		} 
		cout << cnt;return 0;
		
		
	}
	
	
	
	
	return 0;
}

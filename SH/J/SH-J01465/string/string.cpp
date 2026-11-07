#include<bits/stdc++.h>
using namespace std;

struct Input{
	int number;
	char c;
};
Input a[200005];

int main(){

	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		cin >> a[i].number >> a[i].c;
	}
	if(n == 2){
		if(a[0].c == a[1].c){
			printf("0");
		}
		else{
			printf("%d", min(a[0].number, a[1].number));
		}
	}
	else{
		printf("0");
	}
	
	return 0;
}
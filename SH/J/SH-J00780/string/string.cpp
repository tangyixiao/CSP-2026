#include<bits/stdc++.h>
using namespace std;

const int N = 1e6;
int n;
int num[N];
char str[N];
int cnt = 0;
int ist = 0,ind = 0;

int main(){
	freopen('string.in','r',stdin);
	freopen('string.out','w',stdout);
	
	cin >> n;
	for(int i = 1 ; i <= n ; i++){
		cin >> num[i] >> str[i];
	}
	for(int i = 1 ; i <= n ; i++){
		num[i+1] += num[i];
	}
	if(num[n]%2==0){
		for(int i = 1 ; i <= num[n]/2 ; i++){
			for(int j = 1 ; j <= n ; j++){
				if(i<=num[j])
					ist = j;
				if((n-i+1)>=num[j])
					ind = j;
			}
			if(str[ist]!=str[ind])
				cnt++;
		}	
	}
	else{
		for(int i = 1 ; i <= (num[n]-1)/2 ; i++){
			for(int j = 1 ; j <= n ; j++){
				if(i<=num[j])
					ist = j;
				if((n-i+1)>=num[j])
					ind = j;
			}
			if(str[ist]!=str[ind])
				cnt++;
		}
	}
	cout << cnt;
	fclose(stdin);
	fclose(stdout);
	return 0;
}

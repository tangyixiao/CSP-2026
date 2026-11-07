#include <bits/stdc++.h>
using namespace std;

long long len[2000000];
char   c[200000];

int main(){
	freopen("string6.in","r",stdin);
	freopen("string.out","w",stdout);
	
	long long n;
	cin >> n;
	
	for(long long i = 0;i < n;i++){
		cin >> len[i] >> c[i];
	}
	
	long long cnt = 0,left = 0,right = n - 1;
	while(left < right){
		if(len[left] == 0)	left++;
		if(len[right] == 0)	right--;
		
		if(c[left] != c[right]){
			long long l = len[left],r = len[right];
			cnt += min(l,r),len[left] -= min(l,r),len[right] -= min(l,r);
		}	
		else{
			long long l = len[left],r = len[right];
			len[left] -= min(l,r),len[right] -= min(l,r);
		}					
	} 
	
	cout << cnt;
	return 0;
}

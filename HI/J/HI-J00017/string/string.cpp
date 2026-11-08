#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,cnt = 0;
	string sum,sum1;
	cin >> n;
	for(int i = 1;i<=n;i++){
		int number;
		string s;
		cin >> number >> s;
		for(int i = 1;i<=number;i++){
			sum+=s; 
		}
	}
	sum1 = sum;
	reverse(sum.begin(),sum.end());
	if(sum == sum1){
		cout << 0;
		return 0;
	}
	for(int i = 0;i<n;i++){
		if(sum[i] != sum1[i]) cnt++;
	}
	cout << cnt;
	
	
	
	
	fclose(stdin);
	fclose(stdout);	
	return 0;
}

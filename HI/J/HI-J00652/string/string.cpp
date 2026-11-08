#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,correct,result;
	long long sum = 1;
	char num[1000000000000];
	cin >> n;
	for(long long i = 1;i<=n;i++){
		long long longsth;
		char cc;
		cin >> longsth>>cc;
		for(long long m = sum;m<=longsth+sum;m++){
			num[m] = cc;
		}
		sum+=longsth;
	}
	if(sum%2==0){
		correct = sum/2;
		for(long long j = 0;j<correct;j++){
			if(num[correct-j] == num[correct+1+j]) result+=0;
			else{
				result+=1;
			}
		}
	}
	else{
		correct = sum/2+1;
		for(long long z = 1;z<correct;z++){
			if(num[correct-z] == num[correct+z]) result+=0;
			else{
				result+=1;
			}
		}	
	}
	cout << correct-result;
	return 0;
}

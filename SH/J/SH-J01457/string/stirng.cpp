#include<bits/stdc++.h>
using namespace std;

int main()
{

	long long zi[100001];
	int n;
	cin>>n;
	int k=0;

	for(int i=0;i<n;i++){
		char xian;
		int ci;
		cin>>ci>>xian;
		
		for(int j=0;j<ci;j++){
			zi[k]=int(xian);
			k++;
		}
	}
	
	long long sum=0;
	
	if(k%2==0){
		int s=1;
		for(int i=k/2-1;i>=0;i--){
			if(zi[i]!=zi[i+s]){
				sum+=1;
				s++;
			}
		}
		cout<<sum;
	}
	
	else{
		int s=2;
		for(int i=(k-1)/2-1;i>=0;i--){
			if(zi[i]!=zi[i+s]){
				sum+=1;
				s++;
			}
		}
		cout<<sum;
	}
	
	return 0;
	
	
	
//Trick||Treat!
}

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,num1=0;
	long long ans=0; 
	int num[100005];
	char ch[100005];
	cin>>n;
	for (int i=0;i<=n-1;i++){
		cin>>num[i]>>ch[i];
		}
	int num2=n-1;
	while(1!=0){
		if(num[num1]>=num[num2]){
			if(ch[num1]!=ch[num2]){
			ans+=num[num2];
			}
			num[num1]-=num[num2];
			num2-=1;
		}
		else{
		    if(ch[num1]!=ch[num2]){
			ans+=num[num1];
			}
			num[num2]-=num[num1];
			num1+=1;
		}
		if (num1>num2) break;
	}
	cout<<ans;
	return 0;
}

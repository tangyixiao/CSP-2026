#include<bits/stdc++.h>
using namespace std;
char str[1000000000];
long long num[200000];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	int n,sum=0,a=0,cnt=0,f=0;
	char b;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		f+=a;
		cin>>b;
		sum+=a;
		for(int j=f-a;j<f;j++){
			str[j]=b;
			
		}
	}
	//cout<<endl;
	//cout<<sum;
	//for(int i=0;i<sum;i++){
		//cout<<str[i];
	//}
	for(int i=sum-1;i>=sum/2;i--){
		if(str[i]!=str[sum-1-i]){
			str[i]=str[sum-1-i];
			cnt++;
		}
	}
	//cout<<endl;
	cout<<cnt;
		
	fclose(stdin);
	fclose(stdout);
	
	return 0;
}

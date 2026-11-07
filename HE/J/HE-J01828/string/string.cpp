#include<iostream>
#include<cmath>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	long long a;
	char b;
	long long num[n],num_[n];
	char cha[n],cha_[n];
	for(int i=0;i<n;i++){
		cin>>a>>b;
		num[i]=a;
		cha[i]=b;
		num_[n-i-1]=a;
		cha_[n-i-1]=b;
	}
	long long ans=0;
	long long i1=0,i2=0;
	char abc=cha[i1],def=cha_[i2];
	while(abc!='*'||def!='*'){
		if(abc=='*'){
			ans+=num_[i2];
			i2++;
			if(i2>=n)def='*';
			continue;
		}
		if(def=='*'){
			ans+=num[i1];
			i1++;
			if(i1>=n)abc='*';
			continue;
		}
		
		if(abc!=def){
			ans+=min(num[i1],num_[i2]);
		}
		if(num[i1]>num_[i2]){
			num[i1]-=num_[i2];
			i2++;
		}else{
			num_[i2]-=num[i1];
			i1++;
		}
		abc=cha[i1];
		def=cha_[i2];
		if(i1>=n)abc='*';
		if(i2>=n)def='*';
	}
	cout<<ans/2;
	fclose(stdin);
	fclose(stdout);
	return 0;
}

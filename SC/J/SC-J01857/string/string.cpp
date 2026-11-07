#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	vector<char> a(n);
	vector<long long> k(n);
	long long sum=0;
	for(int i=0;i<n;i++){
		cin>>k[i]>>a[i];
		sum+=k[i];
	}
	long long ans=sum;
	float pppp=(n+1)*1.0/2*1.0;
	float mid=(pppp-1)*1.0;
	int i=0;
	for(int ii=0;ii<n;ii++){
		if(i==mid){
			break;
		}
		//cout<<k[i]<<' '<<k[2*mid-i];
		//cout<<i<<" "<<2*mid-i; 
		//cout<<"mid:"<<mid<<" "<<i<<" ";
		if(a[i]==a[2*(mid)-i]){
			//cout<<"b";
			//sum-=min(k[i],k[2*(mid)-i]);
			long long st=k[i];
			k[i]-=min(k[i],k[2*(mid)-i]);
			k[2*(mid)-i]-=min(st,k[2*(mid)-i]);
			if(k[i]==0){
				mid+=0.5;
			}
			else{
				mid-=0.5;i--;
			}
		}
		else{
			
			if(k[2*mid-i]<k[i]){
				//cout<<"b";
				//cout<<k[2*mid-i];
				k[i]-=k[2*mid-i];
				mid-=0.5;i--;
				sum-=k[2*mid-i];k[2*mid-i]=0;
				//cout<<sum;
			}
			else if(k[2*mid-i]==k[i]){
				//cout<<"a";
				sum-=k[i];
				k[2*mid-i]=0;
				k[i]=0;
			}
			else{//cout<<"c";
				//cout<<k[2*mid-i];
				k[2*mid-i]-=k[i];
				mid+=0.5;
				//cout<<k[i];
				sum-=k[i];
				k[i]=0;//cout<<sum;
			}
		}
		i++;
		//cout<<sum<<endl;
	}
	cout<<ans-sum;
	return 0;
}
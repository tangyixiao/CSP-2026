#include<iostream>
#include<string>
using namespace std;
int main(){
	freopen("string.in","r","stdin");
	freopen("string.out","w","stdout")
	int n;
	cin>>n;
	string a;
	int x[200000];
	for(int i=0;i<n;i++){
		int m;
		char b;
		cin>>m>>b;
		x[i]=m;
		a[i]=b;
	}
	int count=0;
	for(int i=0;i<a.size()/2;i++){
		int temp=1;
		if(x[n-i]>0&&i!=0){
			temp--;
			for(int j=n-i+1;j<n;j++){
				if(x[j]==0){
					break;
				}
				else{
					temp--;
				}
			}
		}
		if(a[n-i-temp]==a[i]){
			if(x[n-i-temp]>=x[i]){
				x[n-i-temp]-=x[i];
				x[i]=0;
			}
			else{
				x[i]-=x[n-i-temp];
				for(int j=temp+1;j>=0;j--){
					if(a[n-i-j]==a[i]){
						if(x[n-i-j]>=x[i]){
							x[n-i-j]-=x[i];
							x[i]=0;
						}
						else{
							x[i]-=x[n-i-j];
						}
					}
					else{
						if(x[n-i-j]>=x[i]){
							count+=x[n-i-j]-x[i];
							x[n-i-j]-=x[i];
							x[i]=0;
						}
						else{
							count+=x[i]-x[n-i-j];
							x[i]-=x[n-i-j];
						}
					}	
				}
			}
		}
		else{
			if(x[n-i-temp]>=x[i]){
					count+=x[i];
					x[n-i-temp]-=x[i];
				    x[i]=0;
			}
			else{
				count+=x[n-i-temp];
				x[i]-=x[n-i-temp];
				for(int j=temp+1;j<n;j++){
					if(a[n-i-j]==a[i]){
						if(x[n-i-j]>=x[i]){
							x[n-i-j]-=x[i];
							x[i]=0;
						}
						else{
							x[i]-=x[n-i-j];
						}
					}
					else{
						if(x[n-i-j]>=x[i]){
							count+=x[i];
							x[n-i-j]-=x[i];
							x[i]=0;
						}
						else{
							count+=x[n-i-j];
							x[i]-=x[n-i-j];
						}
					}	
				}
			}
		}
	}
	cout<<count;
}//10:00 cout<<count=cout<<0
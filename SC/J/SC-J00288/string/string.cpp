#include <bits/stdc++.h>
freopen("string.in",r,stdin);
freopen("string.out",w,stdout);

using namespace std;

int n;
long long a[200200],sum=0;
char b[200020];



int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	
	for(int i=1,j=n;i<j;){

		if(b[i]==b[j]){
			
		if(a[i]>a[j]){
		a[i]-=a[j];
		
		j--;}
		else if(a[i]<a[j]){
		a[j]-=a[i];
		
		i++;
		}
		else {
		
		i++;
		j--;	
		}
		} 
		
		else {
		if(a[i]>a[j]){
		a[i]-=a[j];
		sum+=a[j];
		j--;
		
		}
		else if(a[i]<a[j]){
		a[j]-=a[i];
		sum+=a[i];
		i++;
		}
		else {
		sum+=a[i];
		i++;
		j--;	
		}	
			
			
			
		}
	
	
	}
	
	cout<<sum;
	
	
	
	fclose(stdin);
	fclose(stdout);
	
	return 0;
} 

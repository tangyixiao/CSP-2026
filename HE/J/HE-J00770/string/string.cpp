#include <bits/stdc++.h>
using namespace std;
void ou128(__int128 n){
	if(n>=10){
		ou128(n/10);
	}
	putchar(n+'0');
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n=0;
	cin>>n;
	long long int a[200010]={0};
	char c[200010];
	__int128 cou=0;
	long long int cou2=0;
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i];
	}
	int i=0,j=n-1;
	while(i<j){
		if(c[i]==c[j]){
			if(a[i]>a[j]){
				a[i]-=a[j];
				j--;
			}else if(a[i]<a[j]){
				a[j]-=a[i];
				i++;
			}else{
				i++;j--;
			}
		}else if(c[i]!=c[j]){
			if(a[i]>a[j]){
				a[i]-=a[j];
				cou2+=a[j];
				j--;
			}else if(a[i]<a[j]){
				a[j]-=a[i];
				cou2+=a[i];
				i++;
				
			}else{
				cou2+=a[i];
				i++;j--;	
			}
		}
		//cout<<i<<" "<<j<<" "<<a[i]<<endl;
	}
	cout<<cou2;
	fclose(stdin);
	fclose(stdout);
	return 0;
}

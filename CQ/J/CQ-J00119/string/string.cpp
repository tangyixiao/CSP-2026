#include <bits/stdc++.h>
using namespace std;


int n;
long long a[200005];
char c[200005];
long long ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i = 1;i<=n;i++) cin >> a[i]>>c[i];
	long long sum = a[1];
	int k=1;
	for(int i = 1,j = n;j>i;){
		if(c[i] == c[j]){
			if(sum>a[j]&&k ==c[i]){
				sum -=a[j];
				j--;
			}
			else if(sum <a[j]&&k == c[i]){
				sum =a[j]-sum;
				k = 2;
				i++;
			}
			else if(sum>a[i]&&k ==c[j]){
				sum -=a[j];
				i++;
			}
			else if(sum<a[j]&&k ==c[i]){
				sum =a[i]-sum;
				k = 1;				
				j--;
			}
			else if((sum == a[i]&&k == 2)||(sum == a[j]&&k == 1)){
				i++;
				j--;
				sum =a[j];
				k = 1;
			}
		}
		else{
			if(sum>a[j]&&k == c[i]){
				sum -=a[j];
				ans+=a[j];
				j--;
			}
			else if(sum ==a[j]&&k == c[i]){
				ans+=sum;
				sum = a[j]-sum;
				k = 2;
				i++;	
			}
			else if(sum >a[i]&&k == c[j]){
				sum -= a[i];
				ans+=a[i];
				i++;
			}
			else if(sum<a[i]&&k == c[j]){
				ans+=sum;
				sum = a[i]-sum;
				k = 1;
				j--;
			}
			else if((sum == a[i]&&k == 2)||(sum == a[j]&&k == 1)){
				i++;
				j--;
				ans+=sum;
				sum=a[i];
				k = 1;
			}
		}
	}
 	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}

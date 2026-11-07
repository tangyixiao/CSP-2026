#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e5;
int n;
int sum1=0,sum2=0;
ll sum;
ll ans;
int a[N];
char s[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>s[i];
		sum+=a[i];
	}int i=1;
	int j=n;
	//Ë«ÓÎ±ê
	int flagi=sum%2;
	int flagj=(sum+1)%2;
	sum=sum/2+sum%2;
	int middle,middlepoi;
	for(int i=1;i<=n;i++){
		if(sum<=a[i]){
			middle=sum;
			middlepoi=i;
			break;
		}sum-=a[i];
	}
	while(i<=j&&j>=middlepoi&&i<=middlepoi){
		if(i!=middlepoi&&j!=middlepoi){
			if(s[i]==s[j]){
				if(a[i]-sum1<a[j]-sum2){
					sum2+=a[i]-sum1;
					sum1=0;
					i++;
				}else if(a[i]-sum1>a[j]-sum2){
					sum1+=a[j]-sum2;
					sum2=0;
					j--;
				}else{
					sum1=0;
					sum2=0;
					i++;
					j--;
				}
			}else{
				ans+=min(a[i]-sum1,a[j]-sum2);
				if(a[i]-sum1<a[j]-sum2){
					sum2+=a[i]-sum1;
					sum1=0;
					i++;
				}else if(a[i]-sum1>a[j]-sum2){
					sum1+=a[j]-sum2;
					sum2=0;
					j--;
				}else{
					sum1=0;
					sum2=0;
					i++;
					j--;
				}
			}
		}else{
			if(i==middlepoi&&j==middlepoi){
				if(s[i]==s[j]){
					if(middle-flagi-sum1<(a[j]-middle+flagj)-sum2){
						sum2+=a[i]-sum1-flagi-sum1;
						i++;
					}else if(middle-flagi-sum1>(a[j]-middle+flagj)-sum2){
						sum1+=(a[j]-middle+flagj)-sum2;
						j--;
					}else{
						i++;
						sum1=0;
						sum2=0;
						j--;
					}
				}else{
					ans+=min(middle-flagi-sum1,(a[j]-middle+flagj)-sum2);
					if(middle-flagi-sum1<(a[j]-middle+flagj)-sum2){
						sum2+=middle-a[i]-flagi-sum1;
						i++;
					}else if(middle-flagi-sum1>(a[j]-middle+flagj)-sum2){
						sum1+=(a[j]-middle+flagj)-sum2;
						j--;
					}else{
						i++;
						j--;
						sum1=0;
						sum2=0;
					}
				}
			}else if(j==middlepoi){
				if(s[i]==s[j]){
					if(a[i]-sum1<(a[j]-middle+flagj)-sum2){
						sum2+=a[i]-sum1;
						sum1=0; 
						i++;
					}else if(a[i]-sum1>(a[j]-middle+flagj)-sum2){
						sum1+=(a[j]-middle+flagj)-sum2;
						sum2=0;
						j--;
					}else{
						i++;
						j--;
						sum1=0;
						sum2=0;
					}
				}else{
					ans+=min(a[i]-sum1,(a[j]-middle+flagj)-sum2);
					if(a[i]-sum1<(a[j]-middle+flagj)-sum2){
						sum2+=a[i]-sum1;
						sum1=0;
						i++;
					}else if(a[i]-sum1>(a[j]-middle+flagj)-sum2){
						sum1+=(a[j]-middle+flagj)-sum2;
						sum2=0;
						j--;
					}else{
						i++;
						j--;
						sum1=0;
						sum2=0;
					}
				}
			}else{
				if(s[i]==s[j]){
					if(middle-flagi-sum1<a[j]-sum2){
						sum2+=middle-a[i]-flagi-sum1;
						sum1=0;
						i++;
					}else if(middle-a[i]-flagi-sum1>a[j]-sum2){
						sum1+=a[j]-sum2;
						sum2=0;
						j--;
					}else{
						i++;
						j--;
						sum1=0;
						sum2=0;
					}
				}else{
					ans+=min(middle-flagi-sum1,a[j]-sum2);
					if(middle-a[i]-flagi-sum1<a[j]-sum2){
						sum2+=middle-flagi-sum1;
						sum1=0;
						i++;
					}else if(middle-flagi-sum1>a[j]-sum2){
						sum1+=a[j]-sum2;
						sum2=0;
						j--;
					}else{
						i++;
						j--;
						sum1=0;
						sum2=0;
					}
				}
			}
		}
	}cout<<ans<<endl;
	return 0;
}

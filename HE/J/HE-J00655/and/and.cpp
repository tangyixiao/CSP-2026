#include<bits/stdc++.h>
using namespace std;
int a[200005];
int number1[100005],number2[100005],b[100005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int max_ans=0;
    int m,n;
    cin >> m >> n;
    for(int i=1;i<=m;i++){
    	cin >> a[i];
	}
	for(int j=1;j<=m;j++){
		for(int k=1;k<=m;k++){
			if(j!=k){
				int num1=a[j],num2=a[k];
				int cnt=0;
				while(num1!=0){
					cnt++;
					number1[cnt]=num1%2;
					num1/=2;
				}
				int max_len=cnt;
				cnt=0;
				while(num2!=0){
					cnt++;
					number2[cnt]=num2%2;
					num2/=2;
				}
				max_len=max(cnt,max_len);
				for(int i=1;i<=max_len;i++){
					if(number1[i]==number2[i]&&number1[i]==1){
						b[i]=1;
					}
				}
				int ans=0;
				for(int i=max_len;i>=1;i--){
					ans+=b[i]*pow(2,i-1);
				}
				max_ans=max(ans,max_ans);
				for(int i=1;i<=max_len;i++){
					number1[i]=0;
					number2[i]=0;
					b[i]=0;
				}
		    }
		}
	} 
	cout << max_ans;
	
	
	return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main(){	
    int n;
    int a;
    long long sum;
    sum=0;
    char c;
    string str;
    string str2;
    long long cnt[5]={0};
    freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for (int i=1;i<=n;i++){
    	cin>>a;	
	    cin>>c;
	    for (long long j=1;j<=a;j++){
	    	sum++;
	    	str=str+c;
		}
	}

	for (long long i=sum;i>=1;i--){
		str2=str2+str[i-1];

	}

	if(str==str2){
      cout<<0;
	}
	else{
		for(long long i=0;i<sum;i++){
			if(str[i]!=str2[i]){
				cnt[1]++;
			}
		}
		cout<<cnt[1]/2;
		
	}
   	fclose(stdin);
		fclose(stdout);
	return 0;
}

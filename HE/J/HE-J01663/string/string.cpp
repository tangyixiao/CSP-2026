#include<bits/stdc++.h>
using namespace std;

int n;
long long ans;
struct str{
	long long a;
	char c;
}strr[200010];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	long long sum = 0;
	for(int i = 1;i <= n;i++){
		cin >> strr[i].a>>strr[i].c;
		sum += strr[i].a;
	}
//	cout<<sum;////////////////////////////////////////////////
	long long cc = 0;
	int i1,i2,i_mid;
	bool flag = true;
	for(int i = 1;i <= n;i++)
		if(sum % 2 == 0){
			if(cc + strr[i].a < sum / 2){
				cc += strr[i].a;
			}else{
				if(flag){
				    i1 = i;
				    i2 = i + 1;
//				    cout<<i1<<" "<<i2<<endl;////////////////////////////////////////
				}
				strr[i + 2].a = strr[i+1].a;
				strr[i + 2].c = strr[i+1].c;
				if(flag){
					strr[i2].a = cc + strr[i].a - sum/2;
				    strr[i2].c = strr[i1].c;
 				    strr[i1].a = sum / 2 - cc;
 				    flag = false;
				}
			}
		}else{
			if(cc + strr[i].a < sum / 2){
				cc += strr[i].a;
			}else{
				if(flag){
				   i1 = i;
				   i_mid = i + 1;
				   i2 = i + 2;
//				   cout<<i1<<" "<<i2<<endl;////////////////////////////////////////
				}
				strr[i + 3].a = strr[i+2].a;
				strr[i + 3].c = strr[i+2].c;
				if(flag){
				    strr[i2].a = cc + strr[i].a - sum/2 - 1;
				    strr[i2].c = strr[i1].c;
				    strr[i_mid].a = 1;
				    strr[i_mid].c = strr[i1].c;
  				    strr[i1].a = sum / 2 - cc;
  				    cc += strr[i].a;
					flag = false; 	
				}
		}
	}
	//cout<<endl;////////////////////////////////////////////////////////////////////////
	if(sum % 2 == 0){
		for(;i1 >0&&i2 <= n + 2;){
			if(strr[i1].c == strr[i2].c){
				if(strr[i1].a - min(strr[i1].a,strr[i2].a) <= 0){
					strr[i2].a -= min(strr[i1].a,strr[i2].a);
					i1--;
//					cout<<i1<<endl;//////////////////////////////////////////////////////////
				}else{
				    strr[i1].a -= min(strr[i1].a,strr[i2].a);
				    i2++;
//				    cout<<i2<<endl;///////////////////////////////////////////////////////////////
				}
			}else{
				if(strr[i1].a - min(strr[i1].a,strr[i2].a) <= 0){
					ans += min(strr[i1].a,strr[i2].a);
					strr[i2].a -= min(strr[i1].a,strr[i2].a);
//					cout<<ans<<" ";////////////////////////////////////////////////////////////////
					i1--;
//					cout<<i1<<endl;///////////////////////////////////////////////////////////////
				}else{
					ans += min(strr[i1].a,strr[i2].a);
				    strr[i1].a -= min(strr[i1].a,strr[i2].a);
//				    cout<<ans<<" ";/////////////////////////////////////////////////////////////
				    i2++;
//				    cout<<i2<<endl;////////////////////////////////////////////////////////////
				}
			}
		}
	}else{
		for(;i1 > 0&&i2 <= n + 3;){
			if(strr[i1].c == strr[i2].c){
				if(strr[i1].a - min(strr[i1].a,strr[i2].a) <= 0){
					strr[i2].a -= min(strr[i1].a,strr[i2].a);
					i1--;
//					cout<<i1<<endl;/////////////////////////////////////////////////////////////
				}else{
				    strr[i1].a -= min(strr[i1].a,strr[i2].a);
				    i2++;
//				    cout<<i2<<endl;/////////////////////////////////////////////////////////////////
				}
			}else{
				if(strr[i1].a - min(strr[i1].a,strr[i2].a) <= 0){
					ans += min(strr[i1].a,strr[i2].a);
					strr[i2].a -= min(strr[i1].a,strr[i2].a);
					i1--;
				}else{
					ans += min(strr[i1].a,strr[i2].a);
				    strr[i1].a -= min(strr[i1].a,strr[i2].a);
				    i2++;
				}
			}
		}
	}
	cout<<ans;
	return 0;
}

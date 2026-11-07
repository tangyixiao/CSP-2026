#include<bits/stdc++.h>
using namespace std;
long long n,a[200010],minn,sum,lena,lenb,len;
char c[200010],x,y;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		sum+=a[i];
	}
	sum/=2;
	lena=a[1];
	lenb=a[n];
	for(int i=1,j=n;i<=n;){
		x=c[i];
		y=c[j];
		//cout<<lena<<" "<<x<<" "<<lenb<<" "<<y<<endl;
		if(lena<lenb){
			if(x==y){
				len=lena;
				if(len>=sum)break;
			}else{
				if(lena>=sum){
					minn+=sum-len;
					break;
				}
				minn+=lena-len;
				len=lena;
			}
			i++;
			lena+=a[i];
		}else if(lena>lenb){
			if(x==y){
				len=lenb;
				if(len>=sum)break;
			}else{
				if(lenb>=sum){
					minn+=sum-len;
					break;
				}
				minn+=lenb-len;
				len=lenb;
			}
			j--;
			lenb+=a[j];
		}else{
			if(x==y){
				len=lena;
				if(len>=sum)break;
			}else{
				if(lena>=sum){
					minn+=sum-len;
					break;
				}
				minn+=lena-len;
				len=lena;
			}
			i++;
			j--;
			lena+=a[i];
			lenb+=a[j];
		}
	}
	cout<<minn;
	return 0;
} 
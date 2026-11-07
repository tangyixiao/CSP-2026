#include<iostream>
#include<cstring>
using namespace std;
string a;
long long n,x,cnt=1,ans=0;
char y;
bool pd(){
	for(long long i=1;i<=cnt/2+1;i++){
		if(a[i]!=a[cnt+1-i])return false;
	}return true;
} 

//void print(){
//	cout<<"此时字符串为"; 
//	for(int i=1;i<=cnt;i++)cout<<a[i];
//	if(pd())cout<<"，是回文串";
//	else cout<<"，不是回文串"; 
//	cout<<"，已迭代"<<ans<<"次"<<endl;
//}

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=0;i<n;i++){
		cin>>x>>y;
		for(long long j=0;j<x;j++){
			a[cnt]=y;
			cnt++;
		}
	}cnt--;
	for(long long i=1;i<cnt/2+1;i++){
		
		if(pd()){
			cout<<ans;
			fclose(stdin);
			fclose(stdout);
			return 0;
		}if(a[i]!=a[cnt+1-i]){
			if(a[i]==a[i-1]||a[i]==a[i+1]){
				a[cnt+1-i]=a[i];
				ans++;
			}else if(a[cnt+1-i]==a[cnt-i]||a[cnt+1-i]==a[cnt+2-i]){
				a[i]=a[cnt+1-i];
				ans++;
			}else {
				a[cnt+1-i]=a[i];
				ans++;
			}
		}
	}
	
}

#include<bits/stdc++.h>
using namespace std;
long long wd[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string .out","w",stdout);
	long long word_num,sum=0,dif_sum=0,jishu=0;
 	long long num;
	char word;
	 cin>>num;
	 long long a[num];
	 for(long long i=0;i<num;i++)
	 {
	 	cin>>word_num>>word;


	 	a[i]=word_num;
	 	for(int k=0;k<word_num;k++)
	 	{
	 		wd[jishu]=(int)word;
	 		jishu++;
		 }

	 }
	 for(int j=0;j<num;j++)
	 {
	 	sum=sum+a[j];
	 }
	 //test:cout<<sum;
	 if(sum%2==0)
	 {
	 	for(long long h=0;h<sum/2;h++)
	 	{
	 		if(wd[h]!=wd[num-1-h])
	 		{
	 			dif_sum++;
	 			//cout<<(char)wd[h]<<(char)wd[num-h-1]<<'\n';
			 }
		 }
		 cout<<dif_sum;
	 }
	 else
	 {
	 	for(long long q=0;q<sum/2;q++)
	 	{
	 		if(wd[q]!=wd[num-1-q])
	 		{
	 			dif_sum++;
	 			//cout<<(char)wd[q]<<(char)wd[num-q-1]<<'\n';
			 }
		 }
		 cout<<dif_sum;
	 }

	 //cout<<"test:char";
	 //for(int y=0;y<num;y++)
	 //{
	 //	cout<<(char)wd[y];
	 //}
	 fclose(stdin);
	 fclose(stdout);
	 return 0;
}

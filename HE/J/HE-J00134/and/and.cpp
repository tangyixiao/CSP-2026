#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m;
int a[200050];
bool Sub1_5=0,Sub6=0,Sub7=0,Sub8_10=0;
bool Sub11_12=0,Sub14_15=1;
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	if(n<=20) Sub1_5=1;
	if(m==1) Sub6=1;
	if(m==n) Sub7=1;
	if(m==2) Sub8_10=1;
	if(m==n-1) Sub11_12=1;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]!=i-1) Sub14_15=0;
	}
	sort(a+1,a+n+1);
	if(Sub1_5)
	{
		if(m==1) cout<<a[n];
		else if(m==2)
		{
			int maxn=0;
			for(int i=1;i<=n;i++)
				for(int j=1;j<=n;j++)
				{
					if(i==j) continue;
					maxn=max(maxn,(a[i]&a[j]));
				}
			cout<<maxn;
		}
		else if(m==3)
		{
			int maxn=0;
			for(int a1=1;a1<=n;a1++)
			for(int a2=1;a2<=n;a2++)
			{
				if(a1==a2) continue;
				for(int a3=1;a3<=n;a3++)
				{
					if(a1==a2||a2==a3||a1==a3) continue;
					maxn=max(maxn,(a[a1]&a[a2]&a[a3]));
				}
			}
			cout<<maxn;
		}
		else if(m==4)
		{
			int maxn=0;
			for(int a1=1;a1<=n;a1++)
			for(int a2=1;a2<=n;a2++)
			{
				if(a1==a2) continue;
				for(int a3=1;a3<=n;a3++)
				{
					if(a3==a2||a1==a3) continue;
					for(int a4=1;a4<=n;a4++)
					{
						if(a3==a4) continue;
						maxn=max(maxn,a[a1]&a[a2]&a[a3]&a[a4]);
					}
				}
			}
			cout<<maxn;
		}
		else if(m==5)
		{
			int maxn=0;
			for(int a1=1;a1<=n;a1++)
			for(int a2=1;a2<=n;a2++)
			{
				if(a1==a2) continue;
				for(int a3=1;a3<=n;a3++)
				{
					if(a3==a2) continue;
					for(int a4=1;a4<=n;a4++)
					{
						if(a3==a4) continue;
						for(int a5=1;a5<=n;a5++)
						{
							if(a4==a5) continue;
							maxn=max(maxn,a[a1]&a[a2]&a[a3]&a[a4]&a[a5]);
						}
					}
				}
			}
			cout<<maxn;
		}
		else if(m==6)
		{
			int maxn=0;
			for(int a1=1;a1<=n;a1++)
			for(int a2=1;a2<=n;a2++)
			{
				if(a1==a2) continue;
				for(int a3=1;a3<=n;a3++)
				{
					if(a3==a2) continue;
					for(int a4=1;a4<=n;a4++)
					{
						if(a3==a4) continue;
						for(int a5=1;a5<=n;a5++)
						{
							if(a4==a5) continue;
							for(int a6=1;a6<=n;a6++)
							{
								if(a5==a6) continue;
								maxn=max(maxn,a[a1]&a[a2]&a[a3]&a[a4]&a[a5]&a[6]);
							}
						}
					}
				}
			}
			cout<<maxn;
		}
		else if(m==7)
		{
			int maxn=0;
			for(int a1=1;a1<=n;a1++)
			for(int a2=1;a2<=n;a2++)
			{
				if(a1==a2) continue;
				for(int a3=1;a3<=n;a3++)
				{
					if(a3==a2) continue;
					for(int a4=1;a4<=n;a4++)
					{
						if(a3==a4) continue;
						for(int a5=1;a5<=n;a5++)
						{
							if(a4==a5) continue;
							for(int a6=1;a6<=n;a6++)
							{
								if(a5==a6) continue;
								for(int a7=1;a7<=n;a7++)
								{
									if(a6==a7) continue;
									maxn=max(maxn,a[a1]&a[a2]&a[a3]&a[a4]&a[a5]&a[a6]&a[a7]);
								}
							}
						}
					}
				}
			}
			cout<<maxn;
		}
		else if(m==8)
		{
			int maxn=0;
			for(int a1=1;a1<=n;a1++)
			for(int a2=1;a2<=n;a2++)
			{
				if(a1==a2) continue;
				for(int a3=1;a3<=n;a3++)
				{
					if(a3==a2) continue;
					for(int a4=1;a4<=n;a4++)
					{
						if(a3==a4) continue;
						for(int a5=1;a5<=n;a5++)
						{
							if(a4==a5) continue;
							for(int a6=1;a6<=n;a6++)
							{
								if(a5==a6) continue;
								for(int a7=1;a7<=n;a7++)
								{
									if(a6==a7) continue;
									for(int a8=1;a8<=n;a8++)
									{
										if(a7==a8) continue;
										maxn=max(maxn,a[a1]&a[a2]&a[a3]&a[a4]&a[a5]&a[a6]&a[a7]&a[a8]);
									}}}}}}}
			cout<<maxn;
		}
		else if(m==9)
		{
			int maxn=0;
			for(int a1=1;a1<=n;a1++)
			for(int a2=1;a2<=n;a2++)
			{
				if(a1==a2) continue;
				for(int a3=1;a3<=n;a3++)
				{
					if(a3==a2) continue;
					for(int a4=1;a4<=n;a4++)
					{
						if(a3==a4) continue;
						for(int a5=1;a5<=n;a5++)
						{
							if(a4==a5) continue;
							for(int a6=1;a6<=n;a6++)
							{
								if(a5==a6) continue;
								for(int a7=1;a7<=n;a7++)
								{
									if(a6==a7) continue;
									for(int a8=1;a8<=n;a8++)
									{
										if(a7==a8) continue;
										for(int a9=1;a9<=n;a9++){if(a8==a9) continue;maxn=max(maxn,a[a1]&a[a2]&a[a3]&a[a4]&a[a5]&a[a6]&a[a7]&a[a8]&a[a9]);
										}
									}}}}}}}
			cout<<maxn;
		}
		else if(m==10)
		{
			int maxn=0;
			for(int a1=1;a1<=n;a1++)
			for(int a2=1;a2<=n;a2++)
			{
				if(a1==a2) continue;
				for(int a3=1;a3<=n;a3++)
				{
					if(a3==a2) continue;
					for(int a4=1;a4<=n;a4++)
					{
						if(a3==a4) continue;
						for(int a5=1;a5<=n;a5++)
						{
							if(a4==a5) continue;
							for(int a6=1;a6<=n;a6++)
							{
								if(a5==a6) continue;
								for(int a7=1;a7<=n;a7++)
								{
									if(a6==a7) continue;
									for(int a8=1;a8<=n;a8++)
									{
										if(a7==a8) continue;
										for(int a9=1;a9<=n;a9++)
										{if(a8==a9) continue;
										for(int a10=1;a10<=n;a10++)
										{
											if(a9==a10) continue;
											maxn=max(maxn,a[a1]&a[a2]&a[a3]&a[a4]&a[a5]&a[a6]&a[a7]&a[a8]&a[a9]&a[a10]);
										}
										}
									}}}}}}}
			cout<<maxn;
		}
		else if(m==11)
		{
			int maxn=0;
			for(int a1=1;a1<=n;a1++)
			for(int a2=1;a2<=n;a2++)
			{
				if(a1==a2) continue;
				for(int a3=1;a3<=n;a3++)
				{
					if(a3==a2) continue;
					for(int a4=1;a4<=n;a4++)
					{
						if(a3==a4) continue;
						for(int a5=1;a5<=n;a5++)
						{
							if(a4==a5) continue;
							for(int a6=1;a6<=n;a6++)
							{
								if(a5==a6) continue;
								for(int a7=1;a7<=n;a7++)
								{
									if(a6==a7) continue;
									for(int a8=1;a8<=n;a8++)
									{
										if(a7==a8) continue;
										for(int a9=1;a9<=n;a9++)
										{if(a8==a9) continue;
										for(int a10=1;a10<=n;a10++)
										{
											if(a9==a10) continue;
											for(int a11=1;a11<=n;a11++)
											{
												if(a10==a11) continue;
												maxn=max(maxn,a[a1]&a[a2]&a[a3]&a[a4]&a[a5]&a[a6]&a[a7]&a[a8]&a[a9]&a[a10]&a[a11]);
											}
										}
										}
									}}}}}}}
			cout<<maxn;
		}
		else if(m==12)
		{
			int maxn=0;
			for(int a1=1;a1<=n;a1++)
			for(int a2=1;a2<=n;a2++)
			{
				if(a1==a2) continue;
				for(int a3=1;a3<=n;a3++)
				{
					if(a3==a2) continue;
					for(int a4=1;a4<=n;a4++)
					{
						if(a3==a4) continue;
						for(int a5=1;a5<=n;a5++)
						{
							if(a4==a5) continue;
							for(int a6=1;a6<=n;a6++)
							{
								if(a5==a6) continue;
								for(int a7=1;a7<=n;a7++)
								{
									if(a6==a7) continue;
									for(int a8=1;a8<=n;a8++)
									{
										if(a7==a8) continue;
										for(int a9=1;a9<=n;a9++)
										{if(a8==a9) continue;
										for(int a10=1;a10<=n;a10++)
										{
											if(a9==a10) continue;
											for(int a11=1;a11<=n;a11++)
											{
												if(a10==a11) continue;
												for(int a12=1;a12<=n;a12++)
												{
													if(a11==a12) continue;
													maxn=max(maxn,a[a1]&a[a2]&a[a3]&a[a4]&a[a5]&a[a6]&a[a7]&a[a8]&a[a9]&a[a10]&a[a11]&a[a12]);
												}
											}
										}
										}
									}}}}}}}
			cout<<maxn;
		}
		else if(m==13)
		{
			int maxn=0;
			for(int a1=1;a1<=n;a1++)
			for(int a2=1;a2<=n;a2++)
			{
				if(a1==a2) continue;
				for(int a3=1;a3<=n;a3++)
				{
					if(a3==a2) continue;
					for(int a4=1;a4<=n;a4++)
					{
						if(a3==a4) continue;
						for(int a5=1;a5<=n;a5++)
						{
							if(a4==a5) continue;
							for(int a6=1;a6<=n;a6++)
							{
								if(a5==a6) continue;
								for(int a7=1;a7<=n;a7++)
								{
									if(a6==a7) continue;
									for(int a8=1;a8<=n;a8++)
									{
										if(a7==a8) continue;
										for(int a9=1;a9<=n;a9++)
										{if(a8==a9) continue;
										for(int a10=1;a10<=n;a10++)
										{
											if(a9==a10) continue;
											for(int a11=1;a11<=n;a11++)
											{
												if(a10==a11) continue;
												for(int a12=1;a12<=n;a12++)
												{
													if(a11==a12) continue;
													for(int a13=1;a13<=n;a13++)
													{
														if(a12==a13) continue;
														maxn=max(maxn,a[a1]&a[a2]&a[a3]&a[a4]&a[a5]&a[a6]&a[a7]&a[a8]&a[a9]&a[a10]&a[a11]&a[a12]&a[a13]);
													}
												}
											}
										}
										}
									}}}}}}}
			cout<<maxn;
		}
		else if(m==14)
		{
			int maxn=0;
			for(int a1=1;a1<=n;a1++)
			for(int a2=1;a2<=n;a2++)
			{
				if(a1==a2) continue;
				for(int a3=1;a3<=n;a3++)
				{
					if(a3==a2) continue;
					for(int a4=1;a4<=n;a4++)
					{
						if(a3==a4) continue;
						for(int a5=1;a5<=n;a5++)
						{
							if(a4==a5) continue;
							for(int a6=1;a6<=n;a6++)
							{
								if(a5==a6) continue;
								for(int a7=1;a7<=n;a7++)
								{
									if(a6==a7) continue;
									for(int a8=1;a8<=n;a8++)
									{
										if(a7==a8) continue;
										for(int a9=1;a9<=n;a9++)
										{if(a8==a9) continue;
										for(int a10=1;a10<=n;a10++)
										{
											if(a9==a10) continue;
											for(int a11=1;a11<=n;a11++)
											{
												if(a10==a11) continue;
												for(int a12=1;a12<=n;a12++)
												{
													if(a11==a12) continue;
													for(int a13=1;a13<=n;a13++)
													{
														if(a12==a13) continue;
														for(int a14=1;a14<=n;a14++)
														{
															if(a13==a14) continue;
															maxn=max(maxn,a[a1]&a[a2]&a[a3]&a[a4]&a[a5]&a[a6]&a[a7]&a[a8]&a[a9]&a[a10]&a[a11]&a[a12]&a[a13]&a[a14]);
														}
													}
												}
											}
										}
										}
									}}}}}}}
			cout<<maxn;
		}
		else if(m==15)
		{
			int maxn=0;
			for(int a1=1;a1<=n;a1++)
			for(int a2=1;a2<=n;a2++)
			{
				if(a1==a2) continue;
				for(int a3=1;a3<=n;a3++)
				{
					if(a3==a2) continue;
					for(int a4=1;a4<=n;a4++)
					{
						if(a3==a4) continue;
						for(int a5=1;a5<=n;a5++)
						{
							if(a4==a5) continue;
							for(int a6=1;a6<=n;a6++)
							{
								if(a5==a6) continue;
								for(int a7=1;a7<=n;a7++)
								{
									if(a6==a7) continue;
									for(int a8=1;a8<=n;a8++)
									{
										if(a7==a8) continue;
										for(int a9=1;a9<=n;a9++)
										{if(a8==a9) continue;
										for(int a10=1;a10<=n;a10++)
										{
											if(a9==a10) continue;
											for(int a11=1;a11<=n;a11++)
											{
												if(a10==a11) continue;
												for(int a12=1;a12<=n;a12++)
												{
													if(a11==a12) continue;
													for(int a13=1;a13<=n;a13++)
													{
														if(a12==a13) continue;
														for(int a14=1;a14<=n;a14++)
														{
															if(a13==a14) continue;
															for(int a15=1;a15<=n;a15++)
															{
																if(a14==a15) continue;
																maxn=max(maxn,a[a1]&a[a2]&a[a3]&a[a4]&a[a5]&a[a6]&a[a7]&a[a8]&a[a9]&a[a10]&a[a11]&a[a12]&a[a13]&a[a14]&a[a15]);;
															}
														}
													}
												}
											}
										}
										}
									}}}}}}}
			cout<<maxn;
		}
		else if(m==16)
		{
			int maxn=0;
			for(int a1=1;a1<=n;a1++)
			for(int a2=1;a2<=n;a2++)
			{
				if(a1==a2) continue;
				for(int a3=1;a3<=n;a3++)
				{
					if(a3==a2) continue;
					for(int a4=1;a4<=n;a4++)
					{
						if(a3==a4) continue;
						for(int a5=1;a5<=n;a5++)
						{
							if(a4==a5) continue;
							for(int a6=1;a6<=n;a6++)
							{
								if(a5==a6) continue;
								for(int a7=1;a7<=n;a7++)
								{
									if(a6==a7) continue;
									for(int a8=1;a8<=n;a8++)
									{
										if(a7==a8) continue;
										for(int a9=1;a9<=n;a9++)
										{if(a8==a9) continue;
										for(int a10=1;a10<=n;a10++)
										{
											if(a9==a10) continue;
											for(int a11=1;a11<=n;a11++)
											{
												if(a10==a11) continue;
												for(int a12=1;a12<=n;a12++)
												{
													if(a11==a12) continue;
													for(int a13=1;a13<=n;a13++)
													{
														if(a12==a13) continue;
														for(int a14=1;a14<=n;a14++)
														{
															if(a13==a14) continue;
															for(int a15=1;a15<=n;a15++)
															{
																if(a14==a15) continue;
																for(int a16=1;a16<=n;a16++)
																{
																	if(a15==a16) continue;
																	maxn=max(maxn,a[a1]&a[a2]&a[a3]&a[a4]&a[a5]&a[a6]&a[a7]&a[a8]&a[a9]&a[a10]&a[a11]&a[a12]&a[a13]&a[a14]&a[a15]&a[a16]);
																}
															}
														}
													}
												}
											}
										}
										}
									}}}}}}}
			cout<<maxn;
		}
		else if(m==17)
		{
			int maxn=0;
			for(int a1=1;a1<=n;a1++)
			for(int a2=1;a2<=n;a2++)
			{
				if(a1==a2) continue;
				for(int a3=1;a3<=n;a3++)
				{
					if(a3==a2) continue;
					for(int a4=1;a4<=n;a4++)
					{
						if(a3==a4) continue;
						for(int a5=1;a5<=n;a5++)
						{
							if(a4==a5) continue;
							for(int a6=1;a6<=n;a6++)
							{
								if(a5==a6) continue;
								for(int a7=1;a7<=n;a7++)
								{
									if(a6==a7) continue;
									for(int a8=1;a8<=n;a8++)
									{
										if(a7==a8) continue;
										for(int a9=1;a9<=n;a9++)
										{if(a8==a9) continue;
										for(int a10=1;a10<=n;a10++)
										{
											if(a9==a10) continue;
											for(int a11=1;a11<=n;a11++)
											{
												if(a10==a11) continue;
												for(int a12=1;a12<=n;a12++)
												{
													if(a11==a12) continue;
													for(int a13=1;a13<=n;a13++)
													{
														if(a12==a13) continue;
														for(int a14=1;a14<=n;a14++)
														{
															if(a13==a14) continue;
															for(int a15=1;a15<=n;a15++)
															{
																if(a14==a15) continue;
																for(int a16=1;a16<=n;a16++)
																{
																	if(a15==a16) continue;
																	for(int a17=1;a17<=n;a17++)
																	{
																		if(a16==a17) continue;
																		maxn=max(maxn,a[a1]&a[a2]&a[a3]&a[a4]&a[a5]&a[a6]&a[a7]&a[a8]&a[a9]&a[a10]&a[a11]&a[a12]&a[a13]&a[a14]&a[a15]&a[a16]&a[a17]);
																	}
																}
															}
														}
													}
												}
											}
										}
										}
									}}}}}}}
			cout<<maxn;
		}
		else if(m==18)
		{
			int maxn=0;
			for(int a1=1;a1<=n;a1++)
			for(int a2=1;a2<=n;a2++)
			{
				if(a1==a2) continue;
				for(int a3=1;a3<=n;a3++)
				{
					if(a3==a2) continue;
					for(int a4=1;a4<=n;a4++)
					{
						if(a3==a4) continue;
						for(int a5=1;a5<=n;a5++)
						{
							if(a4==a5) continue;
							for(int a6=1;a6<=n;a6++)
							{
								if(a5==a6) continue;
								for(int a7=1;a7<=n;a7++)
								{
									if(a6==a7) continue;
									for(int a8=1;a8<=n;a8++)
									{
										if(a7==a8) continue;
										for(int a9=1;a9<=n;a9++)
										{if(a8==a9) continue;
										for(int a10=1;a10<=n;a10++)
										{
											if(a9==a10) continue;
											for(int a11=1;a11<=n;a11++)
											{
												if(a10==a11) continue;
												for(int a12=1;a12<=n;a12++)
												{
													if(a11==a12) continue;
													for(int a13=1;a13<=n;a13++)
													{
														if(a12==a13) continue;
														for(int a14=1;a14<=n;a14++)
														{
															if(a13==a14) continue;
															for(int a15=1;a15<=n;a15++)
															{
																if(a14==a15) continue;
																for(int a16=1;a16<=n;a16++)
																{
																	if(a15==a16) continue;
																	for(int a17=1;a17<=n;a17++)
																	{
																		if(a16==a17) continue;
																		for(int a18=1;a18<=n;a18++)
																		{
																			if(a17==a18) continue;
																			maxn=max(maxn,a[a1]&a[a2]&a[a3]&a[a4]&a[a5]&a[a6]&a[a7]&a[a8]&a[a9]&a[a10]&a[a11]&a[a12]&a[a13]&a[a14]&a[a15]&a[a16]&a[a17]&a[a18]);
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
										}
									}}}}}}}
			cout<<maxn;
		}
		else if(m==19)
		{
			int maxn=0;
			for(int a1=1;a1<=n;a1++)
			for(int a2=1;a2<=n;a2++)
			{
				if(a1==a2) continue;
				for(int a3=1;a3<=n;a3++)
				{
					if(a3==a2) continue;
					for(int a4=1;a4<=n;a4++)
					{
						if(a3==a4) continue;
						for(int a5=1;a5<=n;a5++)
						{
							if(a4==a5) continue;
							for(int a6=1;a6<=n;a6++)
							{
								if(a5==a6) continue;
								for(int a7=1;a7<=n;a7++)
								{
									if(a6==a7) continue;
									for(int a8=1;a8<=n;a8++)
									{
										if(a7==a8) continue;
										for(int a9=1;a9<=n;a9++)
										{if(a8==a9) continue;
										for(int a10=1;a10<=n;a10++)
										{
											if(a9==a10) continue;
											for(int a11=1;a11<=n;a11++)
											{
												if(a10==a11) continue;
												for(int a12=1;a12<=n;a12++)
												{
													if(a11==a12) continue;
													for(int a13=1;a13<=n;a13++)
													{
														if(a12==a13) continue;
														for(int a14=1;a14<=n;a14++)
														{
															if(a13==a14) continue;
															for(int a15=1;a15<=n;a15++)
															{
																if(a14==a15) continue;
																for(int a16=1;a16<=n;a16++)
																{
																	if(a15==a16) continue;
																	for(int a17=1;a17<=n;a17++)
																	{
																		if(a16==a17) continue;
																		for(int a18=1;a18<=n;a18++)
																		{
																			if(a17==a18) continue;
																			for(int a19=1;a19<=n;a19++)
																			{
																				if(a18==a19) continue;
																				maxn=max(maxn,a[a1]&a[a2]&a[a3]&a[a4]&a[a5]&a[a6]&a[a7]&a[a8]&a[a9]&a[a10]&a[a11]&a[a12]&a[a13]&a[a14]&a[a15]&a[a16]&a[a17]&a[a18]&a[a19]);;
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
										}
									}}}}}}}
			cout<<maxn;
		}
		else if(m==20)
		{
			int ans=a[1];
			for(int i=1;i<=n;i++)
				ans=ans&a[i];
			cout<<ans;
		}
		return 0;
	}
	if(Sub6)
	{
		cout<<a[n];
		return 0;
	}
	if(Sub7)
	{
		int ans=a[1];
		for(int i=2;i<=n;i++)
			ans=(ans&a[i]);
		cout<<ans;
		return 0;
	}
	if(Sub8_10&&n<=10000)
	{
		int maxn=0;
			for(int i=1;i<=n;i++)
				for(int j=1;j<=n;j++)
				{
					if(i==j) continue;
					maxn=max(maxn,(a[i]&a[j]));
				}
		cout<<maxn;
		return 0;
	}
	cout<<a[n-m+1];
	return 0;
}

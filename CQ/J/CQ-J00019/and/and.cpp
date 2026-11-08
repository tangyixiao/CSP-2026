#include <bits/stdc++.h>
using namespace std;
int n,m;
long long a[200005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for (int i = 1;i <= n;i++)
	{
		cin >> a[i];
	}
	int tmp = 0;
	if (m == 20)
	{
		tmp = a[1];
		for (int i = 2;i <= n;i++)
		{
			tmp = tmp & a[i];
		} 
	}
	else if (m == 19)
	{
		for (int a = 1;a <= n;a++)
		{
			for (int b = a + 1;b <= n;b++)
			{
				for (int c = b + 1;c <= n;c++)
				{
					for (int d = c + 1;d <= n;d++)
					{
						for (int e = d + 1;e <= n;e++)
						{
							for (int f = e + 1;f <= n;f++)
							{
								for (int g = f + 1;g <= n;g++)
								{
									for (int h = g + 1;h <= n;h++)
									{
										for (int i = h + 1;i <= n;i++)
										{
											for (int j = i + 1;j <= n;j++)
											{
												for (int k = j + 1;k <= n;k++)
												{
													for (int l = k + 1;l <= n;l++)
													{
														for (int o = l + 1;o <= n;o++)
														{
															for (int p = o + 1;p <= n;p++)
															{
																for (int q = p + 1;q <= n;q++)
																{
																	for (int r = q + 1;r <= n;r++)
																	{
																		for (int s = r + 1;s <= n;s++)
																		{
																			for (int t = s + 1;t <= n;t++)
																			{
																				for (int u = t + 1;u <= n;u++)
																				{
																					tmp = max(tmp,a & b & c & d & e & f & g & h & i & j & k & l & o & p & q & r & s & t & u);
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
									}
								}
							}
						}
					}
				}
			}
		 }
	}
	else if (m == 18)
	{
		for (int a = 1;a <= n;a++)
		{
			for (int b = a + 1;b <= n;b++)
			{
				for (int c = b + 1;c <= n;c++)
				{
					for (int d = c + 1;d <= n;d++)
					{
						for (int e = d + 1;e <= n;e++)
						{
							for (int f = e + 1;f <= n;f++)
							{
								for (int g = f + 1;g <= n;g++)
								{
									for (int h = g + 1;h <= n;h++)
									{
										for (int i = h + 1;i <= n;i++)
										{
											for (int j = i + 1;j <= n;j++)
											{
												for (int k = j + 1;k <= n;k++)
												{
													for (int l = k + 1;l <= n;l++)
													{
														for (int o = l + 1;o <= n;o++)
														{
															for (int p = o + 1;p <= n;p++)
															{
																for (int q = p + 1;q <= n;q++)
																{
																	for (int r = q + 1;r <= n;r++)
																	{
																		for (int s = r + 1;s <= n;s++)
																		{
																			for (int t = s + 1;t <= n;t++)
																			{
																				tmp = max(tmp,a & b & c & d & e & f & g & h & i & j & k & l & o & p & q & r & s & t);
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
								}
							}
						}
					}
				}
			}
		 }
	}
	else if (m == 17)
	{
		for (int a = 1;a <= n;a++)
		{
			for (int b = a + 1;b <= n;b++)
			{
				for (int c = b + 1;c <= n;c++)
				{
					for (int d = c + 1;d <= n;d++)
					{
						for (int e = d + 1;e <= n;e++)
						{
							for (int f = e + 1;f <= n;f++)
							{
								for (int g = f + 1;g <= n;g++)
								{
									for (int h = g + 1;h <= n;h++)
									{
										for (int i = h + 1;i <= n;i++)
										{
											for (int j = i + 1;j <= n;j++)
											{
												for (int k = j + 1;k <= n;k++)
												{
													for (int l = k + 1;l <= n;l++)
													{
														for (int o = l + 1;o <= n;o++)
														{
															for (int p = o + 1;p <= n;p++)
															{
																for (int q = p + 1;q <= n;q++)
																{
																	for (int r = q + 1;r <= n;r++)
																	{
																		for (int s = r + 1;s <= n;s++)
																		{
																			
																				tmp = max(tmp,a & b & c & d & e & f & g & h & i & j & k & l & o & p & q & r & s);
																			
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
							}
						}
					}
				}
			}
		 }
	}
	else if (m == 16)
	{
		for (int a = 1;a <= n;a++)
		{
			for (int b = a + 1;b <= n;b++)
			{
				for (int c = b + 1;c <= n;c++)
				{
					for (int d = c + 1;d <= n;d++)
					{
						for (int e = d + 1;e <= n;e++)
						{
							for (int f = e + 1;f <= n;f++)
							{
								for (int g = f + 1;g <= n;g++)
								{
									for (int h = g + 1;h <= n;h++)
									{
										for (int i = h + 1;i <= n;i++)
										{
											for (int j = i + 1;j <= n;j++)
											{
												for (int k = j + 1;k <= n;k++)
												{
													for (int l = k + 1;l <= n;l++)
													{
														for (int o = l + 1;o <= n;o++)
														{
															for (int p = o + 1;p <= n;p++)
															{
																for (int q = p + 1;q <= n;q++)
																{
																	for (int r = q + 1;r <= n;r++)
																	{
																		
																				tmp = max(tmp,a & b & c & d & e & f & g & h & i & j & k & l & o & p & q & r);
																			
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
						}
					}
				}
			}
		 }
	}
	else if (m == 15)
	{
		for (int a = 1;a <= n;a++)
		{
			for (int b = a + 1;b <= n;b++)
			{
				for (int c = b + 1;c <= n;c++)
				{
					for (int d = c + 1;d <= n;d++)
					{
						for (int e = d + 1;e <= n;e++)
						{
							for (int f = e + 1;f <= n;f++)
							{
								for (int g = f + 1;g <= n;g++)
								{
									for (int h = g + 1;h <= n;h++)
									{
										for (int i = h + 1;i <= n;i++)
										{
											for (int j = i + 1;j <= n;j++)
											{
												for (int k = j + 1;k <= n;k++)
												{
													for (int l = k + 1;l <= n;l++)
													{
														for (int o = l + 1;o <= n;o++)
														{
															for (int p = o + 1;p <= n;p++)
															{
																for (int q = p + 1;q <= n;q++)
																{
																	
																				tmp = max(tmp,a & b & c & d & e & f & g & h & i & j & k & l & o & p & q);
																			
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
					}
				}
			}
		 }
	}
	else if (m == 14)
	{
		for (int a = 1;a <= n;a++)
		{
			for (int b = a + 1;b <= n;b++)
			{
				for (int c = b + 1;c <= n;c++)
				{
					for (int d = c + 1;d <= n;d++)
					{
						for (int e = d + 1;e <= n;e++)
						{
							for (int f = e + 1;f <= n;f++)
							{
								for (int g = f + 1;g <= n;g++)
								{
									for (int h = g + 1;h <= n;h++)
									{
										for (int i = h + 1;i <= n;i++)
										{
											for (int j = i + 1;j <= n;j++)
											{
												for (int k = j + 1;k <= n;k++)
												{
													for (int l = k + 1;l <= n;l++)
													{
														for (int o = l + 1;o <= n;o++)
														{
															for (int p = o + 1;p <= n;p++)
															{
																
																				tmp = max(tmp,a & b & c & d & e & f & g & h & i & j & k & l & o & p);
																			
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
				}
			}
		 }
	}
	else if (m == 13)
	{
		for (int a = 1;a <= n;a++)
		{
			for (int b = a + 1;b <= n;b++)
			{
				for (int c = b + 1;c <= n;c++)
				{
					for (int d = c + 1;d <= n;d++)
					{
						for (int e = d + 1;e <= n;e++)
						{
							for (int f = e + 1;f <= n;f++)
							{
								for (int g = f + 1;g <= n;g++)
								{
									for (int h = g + 1;h <= n;h++)
									{
										for (int i = h + 1;i <= n;i++)
										{
											for (int j = i + 1;j <= n;j++)
											{
												for (int k = j + 1;k <= n;k++)
												{
													for (int l = k + 1;l <= n;l++)
													{
														for (int o = l + 1;o <= n;o++)
														{
															
																				tmp = max(tmp,a & b & c & d & e & f & g & h & i & j & k & l & o);
																			
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
			}
		 }
	}
	if (m == 12)
	{
		for (int a = 1;a <= n;a++)
		{
			for (int b = a + 1;b <= n;b++)
			{
				for (int c = b + 1;c <= n;c++)
				{
					for (int d = c + 1;d <= n;d++)
					{
						for (int e = d + 1;e <= n;e++)
						{
							for (int f = e + 1;f <= n;f++)
							{
								for (int g = f + 1;g <= n;g++)
								{
									for (int h = g + 1;h <= n;h++)
									{
										for (int i = h + 1;i <= n;i++)
										{
											for (int j = i + 1;j <= n;j++)
											{
												for (int k = j + 1;k <= n;k++)
												{
													for (int l = k + 1;l <= n;l++)
													{
														
															
																				tmp = max(tmp,a & b & c & d & e & f & g & h & i & j & k & l);
																			
														
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
		 }
	}
	else if (m == 11)
	{
		for (int a = 1;a <= n;a++)
		{
			for (int b = a + 1;b <= n;b++)
			{
				for (int c = b + 1;c <= n;c++)
				{
					for (int d = c + 1;d <= n;d++)
					{
						for (int e = d + 1;e <= n;e++)
						{
							for (int f = e + 1;f <= n;f++)
							{
								for (int g = f + 1;g <= n;g++)
								{
									for (int h = g + 1;h <= n;h++)
									{
										for (int i = h + 1;i <= n;i++)
										{
											for (int j = i + 1;j <= n;j++)
											{
												for (int k = j + 1;k <= n;k++)
												{
													
														
															
																				tmp = max(tmp,a & b & c & d & e & f & g & h & i & j & k);
																			
														
													
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
	}
	return 0;
}


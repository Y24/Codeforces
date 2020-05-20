#include<bits/stdc++.h>

using namespace std;

int n, q;
vector<int> a, k;

int count_le(int x)
{
	int cnt = 0;
	for(auto y : a)
		if(y <= x)
			cnt++;
	for(auto y : k)
	{
		if(y > 0 && y <= x)
			cnt++;
		if(y < 0 && abs(y) <= cnt)
			cnt--;
	}
	return cnt;
}

int main()
{
	scanf("%d %d", &n, &q);
	a.resize(n);
	k.resize(q);
	for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for(int i = 0; i < q; i++)
		scanf("%d", &k[i]);
	if(count_le(int(1e9)) == 0)
	{
		puts("0");
		return 0;
	}
	int lf = 0;
	int rg = int(1e6) + 1;
	while(rg - lf > 1)
	{
		int mid = (lf + rg) / 2;
		if(count_le(mid) > 0)
			rg = mid;
		else
			lf = mid;
	}
	printf("%d\n", rg);
	return 0;
}
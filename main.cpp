#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	FILE *fp = fopen("p099_base_exp.txt", "r");
	if(!fp)
	{
		fprintf(stderr, "Oh no!\n");
		return 1;
	}

	vector<pair<long double,int>> entries;
	int a, b;
	long double r, q;
	int i = 1;
	while(fscanf(fp, "%d,%d", &a, &b) == 2)
	{
		r = a;
		q = b;
		q *= log2(r);
		entries.push_back(make_pair(q,i));
		i++;
	}
	
	fclose(fp);

	sort(entries.begin(), entries.end());

	fprintf(stdout, "%d\n", entries.back().second);

	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int     recurs(long sum, int m, long x, int *a, int *b, int i, int j)
{
	sum += b[j];
	if (sum > x || j >= m)
		return (j);
	++j;
	return (recurs(sum, m, x, a, b, i, j));
}

int    ft_solve(long sum, int i, int j, int n, int m, long x, int *a, int *b, int score)
{
	if (i >= 0)
			sum += a[i];
	if (i < n && sum <= x)
	{
		j = recurs(sum, m, x, a, b, i, 0);
		++i;
		if (score < i + j)
			score = i + j;
		return (ft_solve(sum, i, 0, n, m, x, a, b, score));
	}
	else
		return (score);
}

int main(){
	int g;
	int res[50];
	int i = 0;
	scanf("%d",&g);
	for(int a0 = 0; a0 < g; a0++){
		int  n; 
		int  m; 
		long x; 
		scanf("%d %d %ld",&n,&m,&x);
		int *a = malloc(sizeof(int) * n + 1);
		for(int a_i = 0; a_i < n; a_i++){
		   scanf("%d",&a[a_i]);
		}
		int *b = malloc(sizeof(int) * m + 1);
		for(int b_i = 0; b_i < m; b_i++){
		   scanf("%d",&b[b_i]);
		}
		res[i] = ft_solve(0, -1, 0, n, m, x, a, b, 0);
		i++;
		free(a);
		free(b);
	}
	i = -1;
	while (++i < g)
		printf("%d\n", res[i]);
	return (0);
}

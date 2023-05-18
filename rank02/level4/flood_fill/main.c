#include <stdlib.h>
#include <stdio.h>
// #include "flood_fill.h"

typedef struct	s_point
{
	int			x;
	int			y;
}				t_point;

char** make_area(char** zone, t_point size);

void fill(char **tab,t_point size, t_point begin, char c)
{
	if (begin.x > size.x || begin.y > size.y || begin.x < 0 || begin.y < 0)
		return;
	if (tab[begin.y][begin.x] == c)
		tab[begin.y][begin.x]= 'F';
	else 
		return;
	fill(tab,size,(t_point){size.x + 1, size.y},c);
	fill(tab,size,(t_point){size.x - 1, size.y},c);
	fill(tab,size,(t_point){size.x ,size.y + 1},c);
	fill(tab,size,(t_point){size.x ,size.y - 1},c);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	fill(tab, size, begin, '1');
}

int main(void)
{
	t_point size = {8, 5};
	char *zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110001",
		"11100001",
	};
	char**  area = make_area(zone, size);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	printf("\n");
	t_point begin = {7, 4};
	flood_fill(area, size, begin);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	
	return (0);
}
char** make_area(char** zone, t_point size)
{
	char** new;

	new = malloc(sizeof(char*) * size.y);
	for (int i = 0; i < size.y; ++i)
	{
		new[i] = malloc(size.x + 1);
		for (int j = 0; j < size.x; ++j)
			new[i][j] = zone[i][j];
		new[i][size.x] = '\0';
	}

	return new;
}
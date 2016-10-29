#include <stdio.h>
#include <math.h>

struct circle
{
	int x;
	int y;
	float dia;
	char color[10];
};

struct circle new_circle();
void cross(struct circle);

int main(void)
{
	struct circle a;

	a = new_circle();
	cross(a);

	return 0;
}

struct circle new_circle()
{
	struct circle new;
	
	printf("Coordinates: ");
	scanf("%d%d", &new.x, &new.y);

	printf("Diameter: ");
	scanf("%f", &new.dia);

	printf("Color: ");
	scanf("%s", new.color);

	return new;
}

void cross(struct circle c)
{
	double hyp;

	hyp = sqrt((double) c.x * c.x + (double) c.y * c.y);
	printf("Distance from circle center to axis origin: %.2lf\n", hyp);

	if(hyp <= c.dia / 2)
		puts("Circle croses axis origin");
	else
		puts("Circle do not inclede aix origin");
}

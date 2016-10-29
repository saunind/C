#include <stdio.h>

int main(void)
{
	struct book
	{
		char *title;
		char *author;
		int pages;
	};

	struct book old, new;

	old.title = "GNU/Linux";
	old.author = "people";
	old.pages = 20213;

	new = old;
	new.pages += 2000;

	printf("%d, %d\n", old.pages, new.pages);

	return 0;
}

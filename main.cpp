#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char **charSquare(int n);
void drawCharSquare(char **square, int n);

int main(int argc, char **argv)
{

	srand(argc==3?atoi(argv[2]):time(NULL));
	int n=atoi(argv[1]);
	drawCharSquare(charSquare(n), n);
}

char **charSquare(int n)
{

	char **square=new char *[n];

	for(int i=0;i<n;i++)
		square[i]=new char[n];

	for(int i=0;i<n*n;i++)
	{
		square[i%n][i/n]='a'+rand()%('z'-'a');
	}
	return square;
}

void drawCharSquare(char **square, int n)
{
	for(int i=0;i<n*n;i++)
	{
        printf("%c",square[i%n][i/n]);
        printf(" ");
        if((i+1)%n==0)
            printf("\n");
    }

}

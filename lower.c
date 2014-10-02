#include <stdio.h>
#include <unistd.h>

int main( int argc, const char* argv[] )
{
	char ch;
	while(read(STDIN_FILENO, &ch, 1) > 0)
	{
		printf("%c", tolower(ch));
	}
}

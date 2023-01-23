#include <unistd.h>


int ft_firstword(char *str)
{
	int     i;

        i = 0;
        if(str[i+1] == '\0' )
	{	write (1, "\n", 1);
		return 0;
	}
	if(str[i] == '\0')
	{
		write (1, "\n", 1);
		return 0;
	}
	while (str[i] == ' ' || str[i] == '\t')
	{
		i++;
	}
	while (!(str[i] == ' ' || str[i] == '\t'))
	{
		write(1, &str[i], 1);
		i++;
	}
	write (1, "\n", 1);
	return(0);
}

int main(int argc, char** argv)
{
	if(argc > 1)
		ft_firstword(argv[1]);
	return 0;
}

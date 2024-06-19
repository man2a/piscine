#include<unistd.h>

void ft_putchar (char letter)
{
	write(1,&letter,1);
}

void ft_put_alphabet (void)
{
	char letter = 'a';
	while (letter <= 'z')
	{
		ft_putchar(letter);
		letter++;
	}
	
}

int main ()
{
	ft_put_alphabet();
	return 0;
}

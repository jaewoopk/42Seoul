bool	ft_isalpha(int ch);
int	ft_isalnum(int ch);

bool	ft_isalpha(int ch)
{
	if (ch >= 'A' && ch <= 'Z')
		return (true);
	else if (ch >= 'a' && ch <= 'z')
		return (true);
	return (false);
}

int	ft_isalnum(int ch)
{
	if (ft_isalpha(ch) && ch >= '0' && ch <= '9')
		return (1);
	return (0);
}

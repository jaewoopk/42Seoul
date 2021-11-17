int	ft_isalnum(int c);

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) && c >= '0' && c <= '9')
		return (1);
	return (0);
}

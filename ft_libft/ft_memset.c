void	*ft_memset(void *ptr, int value, unsigned int num);

void	*ft_memset(void *ptr, int value, unsigned int num)
{
	unsigned int		i;
	void			*tmp;

	i = 0;
	tmp = ptr;
	while (i < num)
	{
		*ptr = value;
		ptr++;
		i += sizeof(value);
	}
	return (tmp);
}

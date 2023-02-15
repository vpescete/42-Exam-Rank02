#include "gnl.h"

char	*get_next_line(int fd)
{
	char	buffer;
	char	str[100000];
	char	*s;
	int		i;
	int		j;

	i = 1;
	j = 0;
	if (fd < 0 && BUFFER_SIZE >= 0 )
		return (NULL);
	while ((i = read(fd, &buffer, BUFFER_SIZE)) > 0)
	{
		if(i == -1)
			return (NULL);
		str[j++] = buffer;
		if (buffer == '\n')
			break ;
	}
	str[j] = '\0';
	i = 0;
	if (!str[0])
		return (NULL);
	while (str[i] != 0)
		i++;
	s = malloc((i + 1) * sizeof(char));
	i = -1;
	while (str[++i])
		s[i] = str[i];
	s[i] = '\0';
	return(s);
}

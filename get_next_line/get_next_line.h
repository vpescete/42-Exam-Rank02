#ifndef GNL_H
# define GNL_H

# define BUFFER_SIZE 1

# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include <unistd.h>

char	*get_next_line(int fd);

#endif

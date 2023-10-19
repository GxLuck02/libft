
#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstring;
	char	*start;

	newstring = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	start = newstring;
	if (newstring == 0)
		return (0);
	while (*s1 != '\0')
	{
		*newstring = *s1;
		s1++;
		newstring++;
	}
	while (*s2 != '\0')
	{
		*newstring = *s2;
		s2++;
		newstring++;
	}
	*newstring = '\0';
	return (start);
}
/*
int main()
{
	char	tab1[]= "What was the color ?";
	char	tab2[]= " Blue Blue Blue!!!";

	char	*result = ft_strjoin(tab1, tab2);
	printf("%s\n", result);

	free(result);
	return (0);
}
*/

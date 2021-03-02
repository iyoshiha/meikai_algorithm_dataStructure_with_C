#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct 
{
	char *name;
} PhysCheck;

int main(int argc, char *argv[])
{
	int i;
	int name_len;
	PhysCheck *phy;

	i = 0;
	if(!(phy = (PhysCheck *)calloc(argc, sizeof(PhysCheck))))
		return(0);

	while (i < argc -1)
	{
		name_len = strlen(argv[i]);
		(phy[i]).name = (char *)calloc(name_len + 1, sizeof(char));
		if (phy == NULL)
			return (0);
		strcpy((phy[i]).name, argv[i+1]);
		i++;
	}
	i = 0;
	while (i < argc)
	{
		if (phy[i].name == NULL)
			break;
		printf("%s\n", (phy[i]).name);
		free(phy[i].name);
		i++;
	}
	free(phy);
	return (0);
}

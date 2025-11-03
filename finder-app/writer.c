#include <stdio.h>
#include <stdlib.h>
#include <syslog.h>

int main(int argc, char *argv[])
{
	openlog(NULL, 0, LOG_USER);
	if(argc != 3)
	{
		printf("usage: %s <path_to_file> <text_to_write_to_file>", argv[0]);
		syslog(LOG_ERR, "usage: %s <path_to_file> <text_to_write_to_file>", argv[0]);
		exit(1);
	}
	FILE *ptr = fopen(argv[1], "w");
	if(ptr == NULL)
	{
		printf("Error opening file %s", argv[1]);
		syslog(LOG_ERR, "Error opening file %s", argv[1]);
		exit(1);
	}
	syslog(LOG_DEBUG, "Writing %s to %s", argv[2], argv[1]);
	fprintf(ptr, "%s", argv[2]);
	fclose(ptr);

	return 0;
}

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void) {
	char *pwd = getenv("PWD");

	if (pwd == NULL) {
		return 1;
	}

	size_t pos = strlen(pwd);

	while (pwd[pos] != '/') {
		pos--;
	}

	printf("%s\n", pwd + pos + 1);
	return 0;
}

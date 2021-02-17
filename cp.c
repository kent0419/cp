#include <stdio.h>

int main(int argc, char *argv[]){
	FILE *old_fp, *new_fp;
	char line[100];

	if(argc!=3){
		printf("%s file1 file2\n", argv[0]);
		return 1;
	}
	old_fp=fopen(argv[1],"r");
	if (old_fp == NULL){
		printf("File doesn't exist. \n");
		return 1;
	}
	else{
		new_fp=fopen(argv[2],"w+");
		while (fgets( line, 100, old_fp) != NULL){
			fputs(line, new_fp);
		}
		fclose(new_fp);
		fclose(old_fp);
	}
	return 0;
}

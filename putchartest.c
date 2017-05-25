#include<stdio.h>

int main (void)
{
	FILE * fp1, *fp2;
	unsigned char p1[10], p2[10];
	fp1 = fopen("1.txt", "w+");
	fp2 = fopen("2.txt", "w+");
	fprintf(fp1, "\n");
	putc('\n', fp2);
	fclose(fp1);
	fclose(fp2);

	fp1 = fopen("1.txt", "rb");
	fp2 = fopen("2.txt", "rb");
	
	fread(p1, 1, 3, fp1);
	fread(p2, 1, 3, fp2);

	printf("printf(\"\\n\")is:%#x%#x%#x%#x\n", p1[0], p1[1], p1[2], p1[3]);
	printf("putchar('\\n')is:%#x%#x%#x%#x\n", p2[0], p2[1], p2[2], p2[3]);

	getchar();
	return 0;
}

#include<stdio.h>
int main(void){
	FILE* fp_read = fopen("sj.txt", "r");
	FILE* fp_write = fopen("sj1.txt", "w");
	//필요파일정의및열어놓기 
	
	char name1[256], name2[256];
	int score[3], sum = 0, i;
	// sj.txt에있는이름과정수정의하기 
	 
	fscanf(fp_read, "%s %s", name1, name2);
	fprintf(fp_write, "%s %s\n", name1, name2);
	// sj.txt에있는내용을name1, name2에저장및sj1.txt에작성하기 
	
	for(i = 0; i < 3; i++) {
		fscanf(fp_read, "%d", &score[i]);
		sum += score[i];
		fprintf(fp_write, "%d\n", score[i]);
	}
	fprintf(fp_write, "\n%.2f", sum / 3.0);
	// sj.txt파일에저장된숫자를입력받고 평균을계산하여sj1.txt에저장 
	
	fclose(fp_read);
	fclose(fp_write);
	// 실행중인파일닫기 

return 0;
}

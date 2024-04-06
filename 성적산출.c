#include<stdio.h>
int main(void){
	FILE* fp_read = fopen("sj.txt", "r");
	FILE* fp_write = fopen("sj1.txt", "w");
	//필요 파일 정의 및 열어놓기 
	
	char name1[256], name2[256];
	int score[3], sum = 0, i;
	// sj.txt에 있는 이름과 정수 정의하기 
	 
	fscanf(fp_read, "%s %s", name1, name2);
	fprintf(fp_write, "%s %s\n", name1, name2);
	// sj.txt에 있는 내용을 name1, name2에 저장 및 sj1.txt에 작성하기 
	
	for(i = 0; i < 3; i++) {
		fscanf(fp_read, "%d", &score[i]);
		sum += score[i];
		fprintf(fp_write, "%d\n", score[i]);
	}
	fprintf(fp_write, "\n%.2f", sum / 3.0);
	// sj.txt파일에 저장된 숫자를 입력받고 평균을 계산하여 sj1.txt에 저장 
	
	fclose(fp_read);
	fclose(fp_write);
	// 실행중인 파일 닫기 

return 0;
}

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//�ṹ��
struct student {
	char name[20];
	char sex[10];
	int age;
	int score;
};
int main() {
	int n;
	scanf("%d", &n);
	struct student stu[1000];
	for (int i = 0; i<n; i++) {
		scanf("%s %s %d %d", &stu[i].name, &stu[i].sex, &stu[i].age, &stu[i].score);
	}
	for (int i = 0; i<n - 1; i++) {
		int j = i + 1;
		if (stu[i].score>stu[j].score) {
			char str[20];
			strcpy(str, stu[i].name);
			strcpy(stu[i].name, stu[j].name);
			strcpy(stu[j].name, str);

			strcpy(str, stu[i].sex);
			strcpy(stu[i].sex, stu[j].sex);
			strcpy(stu[j].sex, str);

			int t;
			t = stu[i].score;
			stu[i].score = stu[j].score;
			stu[j].score = t;

			t = stu[i].age;
			stu[i].age = stu[j].age;
			stu[j].age = t;
			i = -1;//���������������ôǰ��Ŀ��ܻ�������
		}
	}
	for (int i = 0; i<n; i++) {
		printf("%s %s %d %d\n", stu[i].name, stu[i].sex, stu[i].age, stu[i].score);
	}
	return 0;
}

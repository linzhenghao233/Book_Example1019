/*#include <stdio.h>
#include <string.h>

char* StrDelete(char* s, int pos, int len);

int main(void){
	char s[5] = {'a', 'b', 'c', 'd'};
	int n = 0;

	StrDelete(s, 2, 1);
	while(s[n] != EOF){
		printf("%c", s[n]);
		n++;
	}

	return 0;
}

char* StrDelete(char* s, int pos, int len){
	char* s1,* s2;

	if(pos < 0 || pos > strlen(s)){
		printf("��������!");

		return NULL;
	}

	if(pos + len >= strlen(s)){
		s[pos] = '\0';

		return s;
	}

	*s1 = substr(s, 1, pos - 1);
	*s2 = substr(s, pos + len, strlen(s));
	strcat(s1, s2);
	stringAssign(s, s1);

	return s;
}*/

#include <stdio.h>
#define MAXSTRSIZE 256

typedef struct {
	char ch[MAXSTRSIZE];
	int length;
}SeqString;

//�󴮳�
int Strlen(SeqString s) {
	return s.length;
}

//���ĸ���
SeqString* Strcpy(SeqString s, SeqString* t) {
	int i;

	for (i = 0; i < s.length; i++) {
		t->ch[i] = s.ch[i];
	}
	t->length = s.length;

	return t;
}

//��������
int Strcat(SeqString s, SeqString t) {
	int i;

	if (s.length + t.length <= MAXSTRSIZE) {
		for (i = 0; i < t.length; i++) {
			s.ch[i + s.length] = t.ch[i];
		}
		s.length = s.length + t.length;

		return 1;
	}
	else {

	}
}
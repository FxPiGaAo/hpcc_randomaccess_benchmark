#include<stdio.h>
void main(void){
	FILE *fp;
	fp=fopen("/home/xhc/abcdefgh","a");
	if(!fp) printf("fail\n");
	return;
}

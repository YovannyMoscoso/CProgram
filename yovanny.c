#include <stdio.h>
void fun2(int a);

int main(){
	printf("Hello World\n");
	fun2(8);
	return 0;
}

void fun2(int a){
	printf("%d\n", a);
}

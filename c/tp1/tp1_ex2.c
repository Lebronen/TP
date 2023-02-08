#include <stdio.h>
#include <stdlib.h>
#include "tp1_ex2.h"

int main(){

	//q1();
	//fact(6);
	moyenne();
	return (0);
}

//1.
void q1 (){
	int v;
	int i;
	int res;

	scanf("%d", &v);

	i = 0;
	res = 0;
	while(i <= v){
		res += i*i*i;
		i++;
	}

	printf("%d\n", res);
}

//2.
/*unsigned fact (unsigned n){
	if (n == 0) return 1;
	return n * fact(n-1);
}*/

//3.
unsigned fact(unsigned n){
	unsigned res;

	res = 1;
	for(int i = 1; i <= n; i++){
		res *= i;
		printf("%u! = %u\n", i, res);
	}

	return res;
}

//4.
double moyenne(){
	double moy;
	double tmp;
	double i;

	moy = 0;
	tmp = 1;
	i = -1;
	while(tmp){
		printf("Entrez un entier : ");
		scanf("%lf", &tmp);
		moy += tmp;
		i++;

	}
	printf("La moynenne vaut : %lf\n", moy/i);
	return moy/i;
}


















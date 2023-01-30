#include "tp1_ex4.h"

int main(){
	

	printf("1. retourne(3567) -> %u\n", retourne(3567));

	printf("2. sommeChiffre(3567) -> %u\n", sommeChiffre(3567));

	printf("3.a estBarcissique(153) -> %d\n", estNarcissique(153));

	printf("3.b afficheNarcissique(100) -> ");

	afficheNarcissique(200);

	printf("\n4. retourne2(123) -> %u\n", retourne2(123));

	return (0);
}

//1.
unsigned retourne(unsigned n) {
	if(n < 10) return 1;
	return 1 + retourne(n/10);
}

//2.
unsigned sommeChiffre(unsigned n) {
	if(n < 10) return n;
	return n%10 + sommeChiffre(n/10);
}

//3.a
bool estNarcissique(unsigned n){
	unsigned res;
	unsigned tmp;
	unsigned sauv;

	sauv = n;
	tmp = 0;
	res = 0;
	while(n){
		tmp = n%10; 
		res += tmp*tmp*tmp; 
		n /= 10;
	}
	return sauv == res;
}


//3.b
void afficheNarcissique(unsigned n){
	unsigned i;

	i = 0;
	while(i <= n){
		if(estNarcissique(i)) printf("%u ", i);
		i++;
	}
}

//4.
unsigned puissance(unsigned x, unsigned n){
	if(n == 0) return 1;
	if(n == 1) return x;
	return x * puissance(x, n-1);
}

unsigned retourne2(unsigned n){
	unsigned res;
	unsigned k;

	res = 0;
	k = retourne(n);
	while(k > 0){
		res += (n%10) * puissance(10, k-1);
		n /= 10;
		k--;
	}

	return res;
}


































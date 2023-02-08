#include <stdio.h>
#include <stdlib.h>

#define N 8

int main(){

	int i;
	int tmp;
	
	for(int j = 1; j <= N; j++){
		i = 0;
		tmp = j;
	
		while(tmp != 1){
			//printf("%d ", tmp);
			i++;
			if(tmp%2 == 0) tmp = tmp/2;
			else tmp = tmp * 3 + 1;
		}
		printf("%d : %d\n", j, i);
	}
	return (0);

}

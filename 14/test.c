#include <stdio.h>


int main(){

	int num;
	scanf ("%d", &num);

	int score[1006];


	for (int i=0; i < num; i++){

		scanf ("%d", &score[i]);

	}



	for (int i=0; i < num; i++){

		int min = i;

		for (int j=i+1; j < num; j++){

			if (score[j] < score[min]){

				min=j;

			}

			int temp=score[min];
			score[min]=score[i];
			score[i]=temp;

		}

	}


	for (int i=0; i < num; i++){

		printf ("%d\n", score[i]);

		/*if (i < num-1){

		  printf ("%d\n", score[i]);

		  }

		  else {

		  printf ("%d", score[i]);

		  }*/

	}

	return 0;
}

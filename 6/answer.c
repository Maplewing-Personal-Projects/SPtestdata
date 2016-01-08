main(a){
	scanf("%d", &a);
	if( a >= 90 && a <= 100 ) printf("A+");
	else if( a >= 85 && a <= 89) printf("A");
	else if( a >= 80 && a <= 84) printf("A-");
	else if( a >= 77 && a <= 79) printf("B+");
	else if( a >= 73 && a <= 76) printf("B");
	else if( a >= 70 && a <= 72) printf("B-");
	else if( a >= 67 && a <= 69) printf("C+");
	else if( a >= 63 && a <= 66) printf("C");
	else if( a >= 60 && a <= 62) printf("C-");
	else if( a > 0 && a <= 59) printf("F");
	else printf("X");

}

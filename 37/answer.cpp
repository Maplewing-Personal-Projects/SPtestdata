void swap(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}

void sort(int &a, int &b, int &c){
	if( b < a ){
		swap( a, b );
	}
	
	if( c < a ){
		swap( a, c );	
	}

	if( c < b ){
		swap( b, c );
	}
}

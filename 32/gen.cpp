#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
using std::string;

int main(int argc, char *argv[]){
	char number[10];
	if( strcmp(argv[1], "in") == 0 ){
		int i;
		for( i = 1 ; i <= atoi(argv[2]) ; ++i ){
			string sys = "";
			sys += argv[3];
			sys += " > ";
			sprintf(number, "%d", i);
			sys += number;
			sys += ".in";
			printf("gen: Doing %s.\n", sys.c_str());
			system(sys.c_str());
		}
	}
	else if( strcmp(argv[1], "out") == 0 ){
		int i;
		for( i = 1 ; i <= atoi(argv[2]) ; ++i ){
			string sys = "";
			sys += argv[3];
			sys += " < ";
			sprintf(number, "%d", i);
			sys += number;
			sys += ".in > ";
			sprintf(number, "%d", i);
			sys += number;
			sys += ".out";
			printf("gen: Doing %s.\n", sys.c_str());
			system(sys.c_str());
		}
	}
	return 0;
}

#ifndef __SQUARE__
#define __SQUARE__

class Square{
	private:
		int len;
	public:
		Square(){
			len = 0;
		}

		int area(){
			return len * len;
		}

		void setLen(int n){
			len = n;
		}
};

#endif

#ifndef __RECTANGLE__
#define __RECTANGLE__

class Rectangle{
	private:
		int width;
		int height;
	public:
		Rectangle(int w, int h){
			width = w;
			height = h;
		}

		int area(){
			return width * height;
		}

		void setWidth(int w){
			width = w;
		}

		void setHeight(int h){
			height = h;
		}
};

#endif

//**************   Header - All necessary libraries included here ************//
#include <string.h>
#include <stdio.h>
#include <iostream>
#include <cstring>
#include <logging.h>
#include <sys/time.h>


class Source;
//*************** End Header **********//

#ifndef PIXEL_CLASS
#define PIXEL_CLASS
class Pixel {
public:
	unsigned char r;
	unsigned char g;
	unsigned char b;
//	Pixel &operator=(Pixel &p);
};
#endif

#ifndef IMAGE_CLASS
#define IMAGE_CLASS
class Image {
private:
	Pixel *pixel;
	int width;
	int height;
	Image(Image& newImg);
    Source* imgSource;
	
public:
	//Constructors
	Image(void);
        Image(Source* aSource);
	Image(int w, int h);
	~Image();
	//Accessors
	int getWidth() const;
	int getHeight() const;
	Pixel * getBuffer() const;
	//Mutators
	void ResetSize(int w, int h);
        virtual void Update(void) const;
};
#endif

//
//  LiskovSubtitution.h
//  DesignPatterns
//
//  Created by Ave Puello on 2020-05-12.
//  Copyright © 2020 Ave Puello. All rights reserved.
//

#ifndef LiskovSubtitution_h
#define LiskovSubtitution_h


#endif /* LiskovSubtitution_h */

#include <iostream>

class Rectangle
{
protected:
    int width, height;
public:
    Rectangle(const int width, const int height);
    
    virtual int GetWidth() const { return this->width; };
    
    virtual void SetWidth(const int width) { this->width = width; };
    
    virtual int GetHeight() const { return this->height; };
    
    virtual void SetHeight(const int height) { this->height = height; };
    
    int Area() const { return width*height; };
    
};

void process(Rectangle& r);


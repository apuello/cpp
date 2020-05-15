//
//  LiskovSubtitution.cpp
//  DesignPatterns
//
//  Created by Ave Puello on 2020-05-12.
//  Copyright © 2020 Ave Puello. All rights reserved.
//

// Liskov Substitution Principle
// Objects in a program should be replaceable with instances of their subtypes
// w/o altering the correctness of the program

#include "LiskovSubtitution.h"

using namespace std;

Rectangle::Rectangle(const int width, const int height)
: width{width},
    height{height}
{
    
}

void process(Rectangle& r)
{
    
    int w = r.GetWidth();
    r.SetHeight(10);

    cout << "expect area = " << (w * 10)
    << ", got " << r.Area() << endl;
}




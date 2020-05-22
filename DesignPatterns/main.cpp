//
//  OpenClosePrinciple.cpp
//  Design Patterns
//
//  Created by Ave Puello on 2020-05-11.
//

#include "OpenClosed.cpp"
#include "LiskovSubtitution.h"

int main()
{
    
    // *** Open Closed Principle ***
    Product apple{ "Apple", Color::Green, Size::Small };
    Product tree{ "Tree", Color::Green, Size::Large };
    Product house{ "House", Color::Blue, Size::Large };

    std::vector<Product*> all{&apple, &tree, &house };

    BetterFilter bf;
    ColorSpecification green(Color::Green);

    auto green_things = bf.filter(all, green);
    for(auto& x : green_things)
        std::cout << x->name << " is green " << std::endl;

    SizeSpecification big(Size::Large);

    AndSpecification<Product> green_and_big(green, big);
     auto green_and_things = bf.filter(all, green_and_big);
       for(auto& x : green_and_things)
           std::cout << x->name << " is green and big" << std::endl;
    
    
    
    // *** Liskov Subtitution Principle ***
    Rectangle r{5, 5};
    process(r);
    
    getchar();
    return 0;
}

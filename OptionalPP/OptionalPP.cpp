//
//  OptionalPP.cpp
//  OptionalPP
//
//  Created by Isaac Weisberg on 8/9/18.
//

#include <iostream>
#include "OptionalPP.hpp"
#include "OptionalPPPriv.hpp"

void OptionalPP::HelloWorld(const char * s)
{
    OptionalPPPriv *theObj = new OptionalPPPriv;
    theObj->HelloWorldPriv(s);
    delete theObj;
};

void OptionalPPPriv::HelloWorldPriv(const char * s) 
{
    std::cout << s << std::endl;
};


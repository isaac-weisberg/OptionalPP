//
//  usage.cpp
//  libOptionaPP
//
//  Created by Isaac Weisberg on 8/9/18.
//

#include "Optional.hpp"
#include <iostream>

class Asdf {
public:
    const std::string message = "fuck";
};

void usage() {

    auto asdf = std::make_shared<Asdf>();
    auto optionalAsdf = Optional<Asdf>(asdf);

    optionalAsdf.chain([] (auto asdf) {
        std::cout << asdf->message;
    });
}

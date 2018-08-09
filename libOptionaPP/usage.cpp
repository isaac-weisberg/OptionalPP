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
    auto optionalAsdf = Optional<Asdf>(std::make_shared<Asdf>());

    optionalAsdf.chain([] (auto asdf) {
        std::cout << asdf->message;
        return 3;
    });

    optionalAsdf.chain([] (auto asdf) {
        return 3;
    });

    optionalAsdf.chain(<#std::function<RetType (std::shared_ptr<Asdf>)> functor#>)
}

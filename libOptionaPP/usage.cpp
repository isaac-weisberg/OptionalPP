//
//  usage.cpp
//  libOptionaPP
//
//  Created by Isaac Weisberg on 8/9/18.
//

#include "Optional.hpp"

class Asdf {

};

void usage() {
    auto optionalAsdf = Optional<Asdf>(nullptr);

    auto asdf = std::make_shared<Asdf>();
    optionalAsdf.pointer = asdf;

    auto optionalInt = Optional<int>(nullptr);
}

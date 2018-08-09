//
//  Optional.cpp
//  libOptionaPP
//
//  Created by Isaac Weisberg on 8/9/18.
//

#include "Optional.hpp"
#include "memory"

template<typename T>
Optional<T>::Optional(std::shared_ptr<T> pointer) {
    this->pointer = pointer;
}

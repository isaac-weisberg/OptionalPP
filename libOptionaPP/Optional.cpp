//
//  Optional.cpp
//  libOptionaPP
//
//  Created by Isaac Weisberg on 8/9/18.
//

#include "Optional.hpp"
#include <memory>
#include <functional>

template<typename T>
Optional<T>::Optional(std::shared_ptr<T> pointer) {
    this->pointer = pointer;
}

template <typename T>
template <typename RetType>
RetType Optional<T>::chain(std::function<RetType(std::shared_ptr<T>)> functor) {
    auto pointer = this->pointer;
    if (pointer != nullptr) {
        return functor(pointer);
    }
}

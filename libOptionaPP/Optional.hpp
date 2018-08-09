//
//  Optional.hpp
//  libOptionaPP
//
//  Created by Isaac Weisberg on 8/9/18.
//

#ifndef Optional_hpp
#define Optional_hpp

#include <memory>
#include <functional>

template <typename T>
struct Optional {

public:
    Optional(std::shared_ptr<T> pointer);
    std::shared_ptr<T> pointer;

    void chain(std::function<void(std::shared_ptr<T>)> functor);
};

#endif /* Optional_hpp */

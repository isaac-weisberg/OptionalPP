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

    template <typename RetType>
    RetType chain(std::function<RetType(std::shared_ptr<T>)> functor);
};

#endif /* Optional_hpp */

//
//  Optional.hpp
//  libOptionaPP
//
//  Created by Isaac Weisberg on 8/9/18.
//

#ifndef Optional_hpp
#define Optional_hpp

#include <memory>

template <typename T>
struct Optional {

public:
    Optional(std::shared_ptr<T> pointer);
    std::shared_ptr<T> pointer;
};

#endif /* Optional_hpp */

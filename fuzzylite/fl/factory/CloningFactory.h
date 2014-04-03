// #BEGIN_LICENSE
// fuzzylite: a fuzzy logic control library in C++
// Copyright (C) 2014  Juan Rada-Vilela
// 
// This file is part of fuzzylite.
//
// fuzzylite is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// fuzzylite is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with fuzzylite.  If not, see <http://www.gnu.org/licenses/>.
// #END_LICENSE

/* 
 * File:   CloningFactory.h
 * Author: jcrada
 *
 * Created on 1 April 2014, 4:16 PM
 */

#ifndef FL_CLONINGFACTORY_H
#define	FL_CLONINGFACTORY_H

#include "fl/fuzzylite.h"

#include <map>
#include <vector>

namespace fl {

    template <typename T>
    class FL_EXPORT CloningFactory {
    protected:
        std::map<std::string, T> _objects;

    public:
        CloningFactory();
        CloningFactory(const CloningFactory& source);
        CloningFactory& operator=(const CloningFactory& rhs);
        virtual ~CloningFactory();

        virtual void registerObject(const std::string& key, T object);
        virtual void deregisterObject(const std::string& key);
        virtual bool hasObject(const std::string& key) const;
        virtual T getObject(const std::string& key) const;
        virtual T cloneObject(const std::string& key) const;
        virtual std::vector<std::string> available() const;

    };
}

#endif	/* FL_CLONINGFACTORY_H */


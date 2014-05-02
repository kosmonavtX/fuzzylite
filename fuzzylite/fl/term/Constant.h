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
 * File:   Constant.h
 * Author: jcrada
 *
 * Created on 8 May 2013, 8:21 PM
 */

#ifndef FL_CONSTANT_H
#define	FL_CONSTANT_H

#include "fl/term/Term.h"

namespace fl {

    class FL_EXPORT Constant : public Term {
    protected:
        scalar _value;

    public:
        Constant(const std::string& name = "",
                scalar value = fl::nan);
        virtual ~Constant();

        virtual std::string className() const;
        virtual std::string parameters() const;
        virtual void configure(const std::string& parameters);

        virtual scalar membership(scalar x) const;

        virtual void setValue(scalar value);
        virtual scalar getValue() const;

        virtual Constant* clone() const;

        static Term* constructor();
    };
}

#endif	/* FL_CONSTANT_H */


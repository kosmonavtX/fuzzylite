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
 * Discrete.h
 *
 *  Created on: 5/12/2012
 *      Author: jcrada
 */

#ifndef FL_DISCRETE_H
#define FL_DISCRETE_H

#include "fl/term/Term.h"

#include "fl/Exception.h"

#include <vector>
#include <utility>

namespace fl {

    class FL_EXPORT Discrete : public Term {
    public:
        std::vector<scalar> x;
        std::vector<scalar> y;

        Discrete(const std::string& name = "");

        Discrete(const std::string& name,
                const std::vector<scalar>& x,
                const std::vector<scalar>& y);

        Discrete(const std::string& name,
                const std::vector<std::pair<scalar, scalar> >& xy);

        virtual ~Discrete();

        virtual std::string className() const;
        virtual std::string parameters() const;
        virtual void configure(const std::string& parameters);

        //Warning: this method is unsafe. Make sure you use it correctly.
        template <typename T>
        static Discrete* create(const std::string& name, int argc,
                T x1, T y1, ...) throw (fl::Exception);

        virtual scalar membership(scalar x) const;

        virtual std::vector<scalar> xyValues() const;
        virtual std::vector<std::pair<scalar, scalar> > xyPairs() const;

        virtual Discrete* clone() const;

        static Term* constructor();

    };

}
#endif /* FL_DISCRETE_H */

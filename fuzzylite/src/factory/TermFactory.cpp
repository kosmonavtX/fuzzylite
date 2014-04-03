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
 * File:   TermFactory.cpp
 * Author: jcrada
 * 
 * Created on 8 January 2013, 11:18 PM
 */

#include "fl/factory/TermFactory.h"

#include "fl/term/Term.h"
#include "fl/Exception.h"

#include "fl/term/Bell.h"
#include "fl/term/Constant.h"
#include "fl/term/Discrete.h"
#include "fl/term/Function.h"
#include "fl/term/Gaussian.h"
#include "fl/term/GaussianProduct.h"
#include "fl/term/Linear.h"
#include "fl/term/PiShape.h"
#include "fl/term/Ramp.h"
#include "fl/term/Rectangle.h"
#include "fl/term/SShape.h"
#include "fl/term/Sigmoid.h"
#include "fl/term/SigmoidDifference.h"
#include "fl/term/SigmoidProduct.h"
#include "fl/term/Trapezoid.h"
#include "fl/term/Triangle.h"
#include "fl/term/ZShape.h"

namespace fl {

    TermFactory::TermFactory() {
        registerConstructor("", NULL);
        registerConstructor(Bell().className(), &(Bell::constructor));
        registerConstructor(Constant().className(), &(Constant::constructor));
        registerConstructor(Discrete().className(), &(Discrete::constructor));
        registerConstructor(Function().className(), &(Function::constructor));
        registerConstructor(Gaussian().className(), &(Gaussian::constructor));
        registerConstructor(GaussianProduct().className(), &(GaussianProduct::constructor));
        registerConstructor(Linear().className(), &(Linear::constructor));
        registerConstructor(PiShape().className(), &(PiShape::constructor));
        registerConstructor(Ramp().className(), &(Ramp::constructor));
        registerConstructor(Rectangle().className(), &(Rectangle::constructor));
        registerConstructor(SShape().className(), &(SShape::constructor));
        registerConstructor(Sigmoid().className(), &(Sigmoid::constructor));
        registerConstructor(SigmoidDifference().className(), &(SigmoidDifference::constructor));
        registerConstructor(SigmoidProduct().className(), &(SigmoidProduct::constructor));
        registerConstructor(Trapezoid().className(), &(Trapezoid::constructor));
        registerConstructor(Triangle().className(), &(Triangle::constructor));
        registerConstructor(ZShape().className(), &(ZShape::constructor));
    }

    TermFactory::~TermFactory() {

    }


}

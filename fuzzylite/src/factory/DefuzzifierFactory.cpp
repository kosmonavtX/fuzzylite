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
 * File:   DefuzzifierFactory.cpp
 * Author: jcrada
 * 
 * Created on 8 January 2013, 11:17 PM
 */

#include "fl/factory/DefuzzifierFactory.h"

#include "fl/defuzzifier/Centroid.h"
#include "fl/defuzzifier/Bisector.h"
#include "fl/defuzzifier/SmallestOfMaximum.h"
#include "fl/defuzzifier/LargestOfMaximum.h"
#include "fl/defuzzifier/MeanOfMaximum.h"
#include "fl/defuzzifier/WeightedAverage.h"
#include "fl/defuzzifier/WeightedSum.h"

namespace fl {

    DefuzzifierFactory::DefuzzifierFactory() {
        registerConstructor("", NULL);
        registerConstructor(Bisector().className(), &(Bisector::constructor));
        registerConstructor(Centroid().className(), &(Centroid::constructor));
        registerConstructor(LargestOfMaximum().className(), &(LargestOfMaximum::constructor));
        registerConstructor(MeanOfMaximum().className(), &(MeanOfMaximum::constructor));
        registerConstructor(SmallestOfMaximum().className(), &(SmallestOfMaximum::constructor));
        registerConstructor(WeightedAverage().className(), &(WeightedAverage::constructor));
        registerConstructor(WeightedSum().className(), &(WeightedSum::constructor));
    }

    DefuzzifierFactory::~DefuzzifierFactory() {

    }

}

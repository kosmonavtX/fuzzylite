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
 * File:   FisImporter.h
 * Author: jcrada
 *
 * Created on 22 December 2012, 5:53 PM
 */

#ifndef FL_FISIMPORTER_H
#define	FL_FISIMPORTER_H

#include "fl/imex/Importer.h"

#include <vector>
#include <utility>

namespace fl {
    class Norm;
    class TNorm;
    class SNorm;
    class Term;
    class Defuzzifier;
    class Variable;

    class FL_EXPORT FisImporter : public Importer {
    protected:

        virtual void importSystem(const std::string& section, Engine* engine,
                std::string& andMethod, std::string& orMethod,
                std::string& impMethod, std::string& aggMethod,
                std::string& defuzzMethod) const;
        virtual void importInput(const std::string& section, Engine* engine) const;
        virtual void importOutput(const std::string& section, Engine* engine) const;
        virtual void importRules(const std::string& section, Engine* engine) const;
        virtual std::string translateProposition(scalar code, Variable* variable) const;

        virtual std::string tnorm(const std::string& tnorm) const;
        virtual std::string snorm(const std::string& tnorm) const;
        virtual std::string defuzzifier(const std::string& tnorm) const;


        virtual Term* extractTerm(const std::string& line) const;
        virtual Term* prepareTerm(Term* term, const Engine* engine) const;
        virtual Term* createInstance(const std::string& termClass, const std::string& name,
                const std::vector<std::string>& params) const;
        virtual std::pair<scalar, scalar> extractRange(const std::string& range) const;

    public:
        FisImporter();
        virtual ~FisImporter();

        virtual std::string name() const;

        virtual Engine* fromString(const std::string& fcl) const;

        virtual FisImporter* clone() const;
    };

}
#endif	/* FL_FISIMPORTER_H */


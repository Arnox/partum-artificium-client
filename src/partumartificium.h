/*
    Application controller for the proteus game.
    Copyright (C) 2010 Alex Brandt

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
*/

#ifndef PARTUMARTIFICIUM_H
#define PARTUMARTIFICIUM_H

#include <boost/program_options.hpp>

#include "../include/baseerror.h"
#include "../include/baseargumenterror.h"

class PartumArtificiumRenderer;

class PartumArtificium
{
public:
    /**
     * @brief Constructor.
     * @param argc Count of the arguments.
     * @param argv The arguments vector.
     */
    PartumArtificium(int argc, char *argv[]);

    /**
     * @brief Run Application.
     */
    void Run();

private:
    bool debug;
    bool verbose;

    PartumArtificiumRenderer * renderer;

    /**
     * @brief Parse the command line options.
     * @param argc The count of the arguments.
     * @param argv The argument vector.
     * @param description The options description pointer.
     * @return A variables map containing all of the variables parsed.
     */
    boost::program_options::variables_map parseOptions(int argc, char *argv[], boost::program_options::options_description * description = new boost::program_options::options_description("Options: "));
};

class PartumArtificiumError : public Errors::BaseError
{
public:
    PartumArtificiumError(const std::string & msg);
};

class PartumArtificiumArgumentError : public Errors::BaseArgumentError
{
public:
    PartumArtificiumArgumentError(const std::string & msg, const boost::program_options::options_description & description);
};

#endif // PARTUMARTIFICIUM_H

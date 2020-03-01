/******************************************************************************************
*
*  Copyright 2020 Pierre Voigtl�nder(jeanreP)
*
* Permission is hereby granted, free of charge, to any person obtaining a copy of this
* software and associated documentation files(the "Software"), to deal in the Software
* without restriction, including without limitation the rights to use, copy, modify,
* merge, publish, distribute, sublicense, and/or sell copies of the Software, and to
* permit persons to whom the Software is furnished to do so, subject to the following
* conditions:
*
* The above copyright notice and this permission notice shall be included in all copies
* or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
* INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR
* PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
* LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
* TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR
* THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*
******************************************************************************************/
#define CATCH_CONFIG_MAIN
#include "./../../catch/catch.hpp"

#include <lssdpcpp/lssdpcpp.h>

TEST_CASE("TestNetworkInterfaces", "update")
{
    using namespace lssdp;
    SECTION("test updated")
    {
        std::vector<NetworkInterface> interfaces;
        auto updated = lssdp::updateNetworkInterfaces(interfaces);
        REQUIRE(updated);
    }
    SECTION("test not updated")
    {
        std::vector<NetworkInterface> interfaces;
        auto updated = lssdp::updateNetworkInterfaces(interfaces);
        //usually this does not change within this short time ;-) 
        updated = lssdp::updateNetworkInterfaces(interfaces);
        REQUIRE_FALSE(updated);
    }
}
   

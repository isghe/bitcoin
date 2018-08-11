// Copyright (c) 2018 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <rpc/rpccategory.h>

#include <cassert>

namespace rpccategory
{

std::string Label(const RPCCategory category)
{
    // check `enum class RPCCategory`
    #ifdef HANDLE_CASE_RETURN
    #error "HANDLE_CASE_RETURN already defined"
    #else
    #define HANDLE_CASE_RETURN(classname,member) case classname::member: return #member
    #endif

    switch (category)
    {
            HANDLE_CASE_RETURN(RPCCategory, blockchain);
            HANDLE_CASE_RETURN(RPCCategory, control);
            HANDLE_CASE_RETURN(RPCCategory, generating);
            HANDLE_CASE_RETURN(RPCCategory, hidden);
            HANDLE_CASE_RETURN(RPCCategory, mining);
            HANDLE_CASE_RETURN(RPCCategory, network);
            HANDLE_CASE_RETURN(RPCCategory, rawtransactions);
            HANDLE_CASE_RETURN(RPCCategory, util);
            HANDLE_CASE_RETURN(RPCCategory, wallet);
            HANDLE_CASE_RETURN(RPCCategory, zmq);
            HANDLE_CASE_RETURN(RPCCategory, test);
            // if you are missing a case, you'll have a warning here
    }
    assert(0); // never fall down here
    #undef HANDLE_CASE_RETURN
}

} // namespace rpccategory

// Copyright (c) 2018 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <rpc/rpccategory.h>

#include <cassert>

namespace rpccategory
{

std::string Label(const RPCCategory category)
{
    switch (category) {
        case RPCCategory::BLOCKCHAIN: return "blockchain";
        case RPCCategory::CONTROL: return "control";
        case RPCCategory::GENERATING: return "generating";
        case RPCCategory::HIDDEN: return "hidden";
        case RPCCategory::MINING: return "mining";
        case RPCCategory::NETWORK: return "network";
        case RPCCategory::RAWTRANSACTIONS: return "rawtransactions";
        case RPCCategory::UTIL: return "util";
        case RPCCategory::WALLET: return "wallet";
        case RPCCategory::ZMQ: return "zmq";
        case RPCCategory::TEST: return "test";
    }
    assert(false);
}

} // namespace rpccategory

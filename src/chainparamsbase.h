// Copyright (c) 2014-2019 The Bitnamicoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITNAMICOIN_CHAINPARAMSBASE_H
#define BITNAMICOIN_CHAINPARAMSBASE_H

#include <memory>
#include <string>

class ArgsManager;

/**
 * CBaseChainParams defines the base parameters (shared between bitnamicoin-cli and bitnamicoind)
 * of a given instance of the Bitnamicoin system.
 */
class CBaseChainParams
{
public:
    ///@{
    /** Chain name strings */
    static const std::string MAIN;
    static const std::string TESTNET;
    static const std::string REGTEST;
    ///@}

    const std::string& DataDir() const { return strDataDir; }
    int RPCPort() const { return nRPCPort; }

    CBaseChainParams() = delete;
    CBaseChainParams(const std::string& data_dir, int rpc_port) : nRPCPort(rpc_port), strDataDir(data_dir) {}

private:
    int nRPCPort;
    std::string strDataDir;
};

/**
 * Creates and returns a std::unique_ptr<CBaseChainParams> of the chosen chain.
 * @returns a CBaseChainParams* of the chosen chain.
 * @throws a std::runtime_error if the chain is not supported.
 */
std::unique_ptr<CBaseChainParams> CreateBaseChainParams(const std::string& chain);

/**
 *Set the arguments for chainparams
 */
void SetupChainParamsBaseOptions(ArgsManager& argsman);

/**
 * Return the currently selected parameters. This won't change after app
 * startup, except for unit tests.
 */
const CBaseChainParams& BaseParams();

/** Sets the params returned by Params() to those for the given network. */
void SelectBaseParams(const std::string& chain);

#endif // BITNAMICOIN_CHAINPARAMSBASE_H

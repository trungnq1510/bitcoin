// Copyright (c) 2018 The Bitnamicoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITNAMICOIN_COMPAT_STDIN_H
#define BITNAMICOIN_COMPAT_STDIN_H

struct NoechoInst {
    NoechoInst();
    ~NoechoInst();
};

#define NO_STDIN_ECHO() NoechoInst _no_echo

bool StdinTerminal();
bool StdinReady();

#endif // BITNAMICOIN_COMPAT_STDIN_H

// Copyright (c) 2019 The Bitnamicoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITNAMICOIN_UTIL_ASMAP_H
#define BITNAMICOIN_UTIL_ASMAP_H

#include <stdint.h>
#include <vector>

uint32_t Interpret(const std::vector<bool> &asmap, const std::vector<bool> &ip);

bool SanityCheckASMap(const std::vector<bool>& asmap, int bits);

#endif // BITNAMICOIN_UTIL_ASMAP_H

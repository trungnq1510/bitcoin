// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2018 The Bitnamicoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITNAMICOIN_ATTRIBUTES_H
#define BITNAMICOIN_ATTRIBUTES_H

#if defined(__has_cpp_attribute)
#  if __has_cpp_attribute(nodiscard)
#    define NODISCARD [[nodiscard]]
#  endif
#endif
#ifndef NODISCARD
#  if defined(_MSC_VER) && _MSC_VER >= 1700
#    define NODISCARD _Check_return_
#  else
#    define NODISCARD __attribute__((warn_unused_result))
#  endif
#endif

#endif // BITNAMICOIN_ATTRIBUTES_H

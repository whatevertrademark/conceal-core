// Copyright (c) 2012-2017 The Cryptonote developers
// Copyright (c) 2018-2023 Conceal Network & Conceal Devs
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#pragma once

#include "CryptoNoteCore/Account.h"
#include "CryptoNoteBoostSerialization.h"

//namespace cn {
namespace boost
{
  namespace serialization
  {
    template <class Archive>
    inline void serialize(Archive &a, cn::AccountKeys &x, const boost::serialization::version_type ver)
    {
      a & x.address;
      a & x.spendSecretKey;
      a & x.viewSecretKey;
    }

    template <class Archive>
    inline void serialize(Archive &a, cn::AccountPublicAddress &x, const boost::serialization::version_type ver)
    {
      a & x.spendPublicKey;
      a & x.viewPublicKey;
    }

  }
}

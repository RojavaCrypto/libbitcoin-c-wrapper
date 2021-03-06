/**
 * Copyright (c) 2011-2016 libbitcoin developers (see AUTHORS)
 *
 * This file is part of libbitcoin.
 *
 * libbitcoin is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License with
 * additional permissions to the one published by the Free Software
 * Foundation, either version 3 of the License, or (at your option)
 * any later version. For more information see LICENSE.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef LIBBITCOIN_C_INTERNAL_HD_PUBLIC_HPP
#define LIBBITCOIN_C_INTERNAL_HD_PUBLIC_HPP

#include <bitcoin/bitcoin/wallet/hd_public.hpp>

extern "C" {

struct bc_hd_chain_code_t
{
    libbitcoin::wallet::hd_chain_code* obj;
};

struct bc_hd_key_t
{
    libbitcoin::wallet::hd_key* obj;
};

struct bc_hd_lineage_t
{
    libbitcoin::wallet::hd_lineage* obj;
};

struct bc_hd_public_t
{
    libbitcoin::wallet::hd_public* obj;
};

}

#endif


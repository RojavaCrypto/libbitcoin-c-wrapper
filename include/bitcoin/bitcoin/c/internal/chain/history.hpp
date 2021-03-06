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
#ifndef LIBBITCOIN_C_INTERNAL_CHAIN_HISTORY_HPP
#define LIBBITCOIN_C_INTERNAL_CHAIN_HISTORY_HPP

#include <bitcoin/bitcoin/c/chain/history.h>

// TODO: this missing include should be added to history.hpp
#include <bitcoin/bitcoin/chain/output_point.hpp>
#include <bitcoin/bitcoin/chain/history.hpp>
#include <bitcoin/bitcoin/c/internal/utility/vector.hpp>

BC_DECLARE_VECTOR_INTERNAL(history_compact_list, bc_history_compact_t,
    libbitcoin::chain::history_compact::list);

BC_DECLARE_VECTOR_INTERNAL(history_list, bc_history_t,
    libbitcoin::chain::history::list);

extern "C" {

struct bc_history_compact_t
{
    libbitcoin::chain::history_compact* obj;
};

struct bc_history_t
{
    libbitcoin::chain::history* obj;
};

} // extern C

#endif


/* -*- Mode:C++; c-file-style:"gnu"; indent-tabs-mode:nil; -*- */
/**
 * Copyright (c) 2011-2015  Regents of the University of California.
 *
 * This file is part of ndnSIM. See AUTHORS for complete list of ndnSIM authors and
 * contributors.
 *
 * ndnSIM is free software: you can redistribute it and/or modify it under the terms
 * of the GNU General Public License as published by the Free Software Foundation,
 * either version 3 of the License, or (at your option) any later version.
 *
 * ndnSIM is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 * without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 * PURPOSE.  See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * ndnSIM, e.g., in COPYING.md file.  If not, see <http://www.gnu.org/licenses/>.
 **/

#include "content-store-splitcache.hpp"

#include "ns3/log.h"
#include "ns3/packet.h"

NS_LOG_COMPONENT_DEFINE("ndn.cs.Splitcache");

namespace ns3 {
namespace ndn {
namespace cs {

NS_OBJECT_ENSURE_REGISTERED(Splitcache);

TypeId
Splitcache::GetTypeId(void)
{
  static TypeId tid = TypeId("ns3::ndn::cs::Splitcache")
                        .SetGroupName("Ndn")
                        .SetParent<ContentStore>()
                        .AddConstructor<Splitcache>();

  return tid;
}

Splitcache::Splitcache()
{
}

Splitcache::~Splitcache()
{
}

shared_ptr<Data>
Splitcache::Lookup(shared_ptr<const Interest> interest)
{
  this->m_cacheMissesTrace(interest);
  return 0;
}

bool
Splitcache::Add(shared_ptr<const Data> data)
{
  return false;
}

void
Splitcache::Print(std::ostream& os) const
{
}

uint32_t
Splitcache::GetSize() const
{
  return 0;
}

Ptr<cs::Entry>
Splitcache::Begin()
{
  return 0;
}

Ptr<cs::Entry>
Splitcache::End()
{
  return 0;
}

Ptr<cs::Entry> Splitcache::Next(Ptr<cs::Entry>)
{
  return 0;
}

} // namespace cs
} // namespace ndn
} // namespace ns3

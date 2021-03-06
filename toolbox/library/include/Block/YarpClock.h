/*
 * Copyright (C) 2018 Istituto Italiano di Tecnologia (IIT)
 * All rights reserved.
 *
 * This software may be modified and distributed under the terms of the
 * GNU Lesser General Public License v2.1 or any later version.
 */

#ifndef WBT_YARPCLOCK_H
#define WBT_YARPCLOCK_H

#include "Core/Block.h"

#include <string>

namespace wbt {
    class BlockInformation;
    class YarpClock;
} // namespace wbt

/**
 * @brief The wbt::YarpClock class
 */
class wbt::YarpClock final : public wbt::Block
{
public:
    YarpClock() = default;
    ~YarpClock() override = default;

    unsigned numberOfParameters() override;
    bool configureSizeAndPorts(BlockInformation* blockInfo) override;
    bool initialize(BlockInformation* blockInfo) override;
    bool terminate(const BlockInformation* blockInfo) override;
    bool output(const BlockInformation* blockInfo) override;
};

#endif // WBT_YARPCLOCK_H

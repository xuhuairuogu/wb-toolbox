# Copyright (C) 2018 Istituto Italiano di Tecnologia (IIT). All rights reserved.
# This software may be modified and distributed under the terms of the
# GNU Lesser General Public License v2.1 or any later version.

if(WBT_USES_MATLAB)
    add_subdirectory(MxAnyType)
endif()

add_subdirectory(sharedlibpp)
add_subdirectory(thrift)

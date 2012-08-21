# @@@LICENSE
#
# Copyright (c) 2012 Hewlett-Packard Development Company, L.P.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#
# LICENSE@@@

cmake_minimum_required(VERSION 2.8.7)

project(rdx C)

include(webOS/webOS)
webos_modules_init(1 0 0 QUALIFIER RC2)
webos_component(2 0 0)

webos_build_pkgconfig()
webos_config_build_doxygen(doc Doxyfile)

include_directories(include/public)
webos_add_compiler_flags(ALL -Wall)
webos_add_linker_options(ALL --version-script=${CMAKE_SOURCE_DIR}/src/rdxExports.map)
webos_add_linker_options(ALL --no-undefined)

add_library(rdx SHARED src/rdx.c)
webos_build_library() 

librdx-stub
===========

Summary
-------
Stubbed implementation of the webOS Remote Diagnostics Library

Description
-----------
A number of components within Open webOS are instrumented to provide diagnostic
reports to a remote site. _librdx_ provides the interface used by those 
components.

_librdx-stub_ is a stubbed version of that library, allowing implementors to
create their own remote-diagnostic functionality and leverage the existing 
instrumentation in other components. The <tt>rdx.h</tt> header file specifies
the routines that must be implemented to creating a functional _librdx_ library.

Dependencies
============

Below are the tools (and their minimum versions) required to build _librdx-stub_:

- cmake (version required by openwebos/cmake-modules-webos)
- gcc 4.6.3
- make (any version)
- openwebos/cmake-modules-webos 1.0.0 RC2

How to Build on Linux
=====================

## Building

Once you have downloaded the source, enter the following to build it (after
changing into the directory under which it was downloaded):

    $ mkdir BUILD
    $ cd BUILD
    $ cmake ..
    $ make
    $ sudo make install

The directory under which the files are installed defaults to <tt>/usr/local/webos</tt>.
You can install them elsewhere by supplying a value for <tt>WEBOS\_INSTALL\_ROOT</tt>
when invoking <tt>cmake</tt>. For example:

    $ cmake -D WEBOS_INSTALL_ROOT:PATH=$HOME/projects/openwebos ..
    $ make
    $ make install

will install the files in subdirectories of <tt>$HOME/projects/openwebos</tt>.

Specifying <tt>WEBOS\_INSTALL\_ROOT</tt> also causes <tt>pkg-config</tt> to look
in that tree first before searching the standard locations. You can specify
additional directories to be searched prior to this one by setting the
<tt>PKG\_CONFIG\_PATH</tt> environment variable.

If not specified, <tt>WEBOS\_INSTALL\_ROOT</tt> defaults to <tt>/usr/local/webos</tt>.

To configure for a debug build, enter:

    $ cmake -D CMAKE_BUILD_TYPE:STRING=Debug ..

To see a list of the make targets that <tt>cmake</tt> has generated, enter:

    $ make help

## Uninstalling

From the directory where you originally ran <tt>make install</tt>, enter:

    $ [sudo] make uninstall

You will need to use <tt>sudo</tt> if you did not specify <tt>WEBOS\_INSTALL\_ROOT</tt>.

## Generating Documentation

The tools required to generate the documentation are:

- doxygen 1.7.6.1
- graphviz 2.26.3 

Once you have run <tt>cmake</tt>, enter the following to generate the
documentation:

    $ make docs

To view the generated HTML documentation, point your browser to
<tt>Documentation/rdx/html/index.html</tt>

To install the generated documentation, enter:

    $ [sudo] make install-docs

The documentation will be installed to <tt>usr/share/doc/rdx/html</tt>
under the tree defined by the value of <tt>WEBOS\_INSTALL\_ROOT</tt> (or its
default).

You will need to use <tt>sudo</tt> if you did not specify <tt>WEBOS\_INSTALL\_ROOT</tt>.

# Copyright and License Information

All content, including all source code files and documentation files in this repository are:

Copyright (c) 2012 Hewlett-Packard Development Company, L.P.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this content except in compliance with the License.
You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.

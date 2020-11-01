Bitnamicoin Core
=============

Setup
---------------------
Bitnamicoin Core is the original Bitnamicoin client and it builds the backbone of the network. It downloads and, by default, stores the entire history of Bitnamicoin transactions, which requires a few hundred gigabytes of disk space. Depending on the speed of your computer and network connection, the synchronization process can take anywhere from a few hours to a day or more.

To download Bitnamicoin Core, visit [bitnamicoincore.org](https://bitnamicoincore.org/en/download/).

Running
---------------------
The following are some helpful notes on how to run Bitnamicoin Core on your native platform.

### Unix

Unpack the files into a directory and run:

- `bin/bitnamicoin-qt` (GUI) or
- `bin/bitnamicoind` (headless)

### Windows

Unpack the files into a directory, and then run bitnamicoin-qt.exe.

### macOS

Drag Bitnamicoin Core to your applications folder, and then run Bitnamicoin Core.

### Need Help?

* See the documentation at the [Bitnamicoin Wiki](https://en.bitnamicoin.it/wiki/Main_Page)
for help and more information.
* Ask for help on [#bitnamicoin](https://webchat.freenode.net/#bitnamicoin) on Freenode. If you don't have an IRC client, use [webchat here](https://webchat.freenode.net/#bitnamicoin).
* Ask for help on the [BitnamicoinTalk](https://bitnamicointalk.org/) forums, in the [Technical Support board](https://bitnamicointalk.org/index.php?board=4.0).

Building
---------------------
The following are developer notes on how to build Bitnamicoin Core on your native platform. They are not complete guides, but include notes on the necessary libraries, compile flags, etc.

- [Dependencies](dependencies.md)
- [macOS Build Notes](build-osx.md)
- [Unix Build Notes](build-unix.md)
- [Windows Build Notes](build-windows.md)
- [FreeBSD Build Notes](build-freebsd.md)
- [OpenBSD Build Notes](build-openbsd.md)
- [NetBSD Build Notes](build-netbsd.md)
- [Gitian Building Guide (External Link)](https://github.com/bitnamicoin-core/docs/blob/master/gitian-building.md)

Development
---------------------
The Bitnamicoin repo's [root README](/README.md) contains relevant information on the development process and automated testing.

- [Developer Notes](developer-notes.md)
- [Productivity Notes](productivity.md)
- [Release Notes](release-notes.md)
- [Release Process](release-process.md)
- [Source Code Documentation (External Link)](https://doxygen.bitnamicoincore.org/)
- [Translation Process](translation_process.md)
- [Translation Strings Policy](translation_strings_policy.md)
- [JSON-RPC Interface](JSON-RPC-interface.md)
- [Unauthenticated REST Interface](REST-interface.md)
- [Shared Libraries](shared-libraries.md)
- [BIPS](bips.md)
- [Dnsseed Policy](dnsseed-policy.md)
- [Benchmarking](benchmarking.md)

### Resources
* Discuss on the [BitnamicoinTalk](https://bitnamicointalk.org/) forums, in the [Development & Technical Discussion board](https://bitnamicointalk.org/index.php?board=6.0).
* Discuss project-specific development on #bitnamicoin-core-dev on Freenode. If you don't have an IRC client, use [webchat here](https://webchat.freenode.net/#bitnamicoin-core-dev).
* Discuss general Bitnamicoin development on #bitnamicoin-dev on Freenode. If you don't have an IRC client, use [webchat here](https://webchat.freenode.net/#bitnamicoin-dev).

### Miscellaneous
- [Assets Attribution](assets-attribution.md)
- [bitnamicoin.conf Configuration File](bitnamicoin-conf.md)
- [Files](files.md)
- [Fuzz-testing](fuzzing.md)
- [Reduce Memory](reduce-memory.md)
- [Reduce Traffic](reduce-traffic.md)
- [Tor Support](tor.md)
- [Init Scripts (systemd/upstart/openrc)](init.md)
- [ZMQ](zmq.md)
- [PSBT support](psbt.md)

License
---------------------
Distributed under the [MIT software license](/COPYING).

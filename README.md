(DESIGN DOCUMENT)
none
====

Utility for doing nothing.

Overview
--------
None is a utility, that does nothing, simply starts and exits immediately.
Absolutely no process should be done whatsoever.

Interface
---------
None controls via command line interface.
Usage:

	none [-v|--version|-h|--help]

Options:

-h, --help: print message like this and exits.
-v, --version: print program version and exits.

None return code is default one for system (usually it should be zero).

Program flow
------------

Program starts and immediately exits.

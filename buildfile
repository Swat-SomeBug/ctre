./: {*/ -build/ -upstream/} doc{UPSTREAM.README.md LICENSE} manifest

# Don't install tests.
#
tests/: install = false

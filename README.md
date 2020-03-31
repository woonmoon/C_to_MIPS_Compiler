# langproc-2019-cw-Jetstream

C-to-Python Translator
=====================================

Translates a subset of pre-processed C90 into Python.

Program build and execution
---------------------------

Build using the command:

    make bin/c_compiler

The translator function is invoked using the flag `--translate`, with the source file and output file specified on the command line:

    bin/c_compiler --translate [source-file.c] -o [dest-file.py]
    
A script to run some tests: ./run.sh

A compiler for the C language
============================================

Reads C source code from a file, and write MIPS assembly to another file.

Program build and execution
---------------------------

Built using the command:

    make bin/c_compiler

The compilation function is invoked using the flag `-S`, with the source file and output file specified on the command line:

    bin/c_compiler -S [source-file.c] -o [dest-file.s]
    
A script to run some tests: ./mipstesting.sh

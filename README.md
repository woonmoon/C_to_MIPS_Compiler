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
    
If you want to do further testing run: ./run.sh

# 357-HW1

Overview

This assignment serves two purposes. Its first purpose is as an introduction to programming in C (a warm-up of
sorts). Its second purpose is as an introduction to working in the Unix environment.
You will implement a (feature-reduced) version of the Unix tr program. This program “translates” characters
based on a user-specified mapping. This can be used, for instance, to translate every ‘-’ into a ‘_’ (the full-featured
program allows for more advanced translations).


Write a program called mytr that translates or deletes characters from its input. Your program should work as a
filter; it should take its input from the standard input (stdin) and write its output to the standard output (stdout).
All error messages should be written to standard error (stderr).
This program will support a subset of the features supported by tr(1), so you can test your program by comparing
its output to that of tr. The following example demonstrates how one might compare the output of these two
programs. diff(1) is a program that reports differences between two files; it gives no output if the file contents are
identical.
